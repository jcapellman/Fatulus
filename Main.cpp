#include "Main.h"
#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include "OpenGLLegacyRenderer.h"
#include <iostream>

int main() {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    // Set OpenGL version to 2.1 (pre-shader, legacy)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);

    int width = 800;
    int height = 600;
    const char* title = "Fatulus";

    GLFWwindow* window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // Initialize OpenGL renderer
    OpenGLLegacyRenderer renderer = OpenGLLegacyRenderer();

    if (!renderer.Init(width, height, title)) {
        std::cerr << "Failed to initialize OpenGL renderer\n";
        glfwDestroyWindow(window);
        glfwTerminate();
        return -1;
    }

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        // Poll events
        glfwPollEvents();

        // Handle escape key to quit
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
        }

        renderer.Clear();

        // TODO: Add rendering calls here

        renderer.Present();
        glfwSwapBuffers(window);
    }

    renderer.Shutdown();
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}