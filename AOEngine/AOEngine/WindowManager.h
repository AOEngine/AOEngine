#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H

#include "Manager.h"

namespace AOEFramework
{
	class WindowManager : public Manager<WindowManager>
	{
	public:
		WindowManager();
		~WindowManager();
		WindowManager(const WindowManager& rhs) = delete;
		WindowManager& operator = (const WindowManager& rhs) = delete;

		void Init();
		void Update();
		void Free();
		void Exit();
	private:
		size_t width;
		size_t height;
	};
}


#endif