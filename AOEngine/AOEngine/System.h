#ifndef SYSTEM_H
#define SYSTEM_H

namespace AOEFramework
{
	template <typename DERIVING>
	class System
	{
	public:
		System(const System& rhs) = delete;
		System& operator=(const System& rhs) = delete;

		//when the system first boots up, used only once!
		void Init()
		{
			static_cast<DERIVING *>(this)->Init();
		}

		//every game loop it will be updated.
		void Update(float dt)
		{
			static_cast<DERIVING *>(this)->Update(dt);
		}

		//for loading the system stuffs when a level begins or restarts
		void LoadResource()
		{
			static_cast<DERIVING *>(this)->LoadResource();
		}

		//when a level ends, the resources are freed here
		void Free()
		{
			static_cast<DERIVING *>(this)->Free();
		}

		//when exiting the game, this function is called. deallocate everything here!
		void Exit()
		{
			static_cast<DERIVING *>(this)->Exit();
		}

		void PassMessage(Message& message)
		{
			static_cast<DERIVING *>(this)->PassMessage(message);
		}

	};
}
#endif