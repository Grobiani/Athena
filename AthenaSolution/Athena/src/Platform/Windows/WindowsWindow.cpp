#include "Core/Window.h"

#include "GLFW/glfw3.h"

bool Athena::Window::Init(const std::string& window_title)
{

	GLFWwindow* window;

	if (!glfwInit()) return false;

	window = glfwCreateWindow(640, 480, window_title.c_str(), NULL, NULL);

	if (!window) { glfwTerminate(); return false; }

	glfwMakeContextCurrent(window);

	glfwSwapInterval(0);

	m_RawWindowPointer = window;

}

void Athena::Window::Terminate()
{
	glfwTerminate();
}

bool Athena::Window::WindowShouldClose()
{
	return glfwWindowShouldClose((GLFWwindow*) m_RawWindowPointer);
}

void Athena::Window::SwapBuffers()
{
	glfwSwapBuffers((GLFWwindow*) m_RawWindowPointer);
	
}

void Athena::Window::HandleEvents()
{
	glfwPollEvents();
}
