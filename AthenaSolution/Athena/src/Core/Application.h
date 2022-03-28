#pragma once

namespace Athena {

	class Application
	{

	private:

		static Application s_Application;

		class Window* m_MainWindow;

	public:

		void Run();

		static Application& GetApplication() {
			return s_Application;
		}

	};

}

