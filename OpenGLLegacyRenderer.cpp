#include "OpenGLLegacyRenderer.h"
#include <glad/gl.h>
#include <string>

OpenGLLegacyRenderer::OpenGLLegacyRenderer() {}
OpenGLLegacyRenderer::~OpenGLLegacyRenderer() {}

bool OpenGLLegacyRenderer::Init(int width, int height, const char* title) {
    // Set the clear color to red and configure the viewport and projection for 2D
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f); // Red background
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, height, 0, -1, 1); // 2D top-left origin
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    return true;
}

bool OpenGLLegacyRenderer::Initialize() {
    // Could call Init with default values or just return true
    return true;
}

void OpenGLLegacyRenderer::Shutdown() {
    // Cleanup resources if needed
}

std::string OpenGLLegacyRenderer::Name() const {
    return "OpenGLLegacyRenderer";
}

void OpenGLLegacyRenderer::Clear() {
    // glClear, etc.
}

void OpenGLLegacyRenderer::Present() {
    // Swap buffers, etc. (handled externally in main loop)
}

void OpenGLLegacyRenderer::Resize(int width, int height) {
    // glViewport, etc.
}

void OpenGLLegacyRenderer::DrawQuad(float x, float y, float width, float height, int textureId) {
    // Draw quad code
}

void OpenGLLegacyRenderer::DrawLine(float x1, float y1, float x2, float y2) {
    // Draw line code
}

int OpenGLLegacyRenderer::LoadTexture(const char* filePath) {
    // Texture loading code
    return 0;
}

void OpenGLLegacyRenderer::RenderFrame() {
    // Could call Clear/Present or be left empty if not used
}