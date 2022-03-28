#include "Application.h"

#include <iostream>

#include "GLFW/glfw3.h"

#include "Window.h"

void Athena::Application::Run()
{

	m_MainWindow = new Window();
	
	m_MainWindow->Init("TestWindow");

}
