#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_ANY_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 800, "Test", NULL, NULL);
	if (window == NULL) {
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) 
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(window);

	glfwTerminate();
	std::cout << "HI" << std::endl;
	return 0;
}