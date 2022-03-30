#include "Application.h"

#include <iostream>

#include "GLFW/glfw3.h"

#include "Window.h"

Athena::Application::~Application()
{

	m_MainWindow->Terminate();

}

void Athena::Application::Run()
{

	m_MainWindow = new Window();
	
	m_MainWindow->Init("TestWindow");


	while (!m_MainWindow->WindowShouldClose()) {

		m_MainWindow->HandleEvents();
		m_MainWindow->SwapBuffers();
	}


}
