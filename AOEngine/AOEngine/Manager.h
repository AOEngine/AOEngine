#ifndef MANAGER_H
#define MANAGER_H

namespace AOEFramework
{
	//this is the abstract base class that all manager inherits
	template <typename DERIVING>
	class Manager
	{
	public:
		Manager(const Manager& rhs) = delete;
		Manager& operator=(const Manager& rhs) = delete;
		void Init()
		{
			static_cast<DERIVING *>(this)->Init();
		}

		void Update(float dt)
		{
			static_cast<DERIVING *>(this)->Update(dt);
		}

		void Free()
		{
			static_cast<DERIVING *>(this)->Free();
		}

		void Exit()
		{
			static_cast<DERIVING *>(this)->Exit();
		}
	};
}
#endif