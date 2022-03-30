#pragma once

#include <string>

namespace Athena {

	class Window
	{

	protected:

		void* m_RawWindowPointer;

	public:

		bool Init(const std::string& window_title);

		void Terminate();

		bool WindowShouldClose();

		void SwapBuffers();

		void HandleEvents();

	};

}

