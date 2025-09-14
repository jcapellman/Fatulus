#pragma once

#include "BaseGfxRenderer.h"

// OpenGL (pre-shader) implementation for 2D/3D rendering
class OpenGLLegacyRenderer : public BaseGfxRenderer {
public:
    OpenGLLegacyRenderer();
    ~OpenGLLegacyRenderer() override;

    bool Init(int width, int height, const char* title) override;
    void Clear() override;
    void Present() override;
    void Resize(int width, int height) override;

    void DrawQuad(float x, float y, float width, float height, int textureId) override;
    void DrawLine(float x1, float y1, float x2, float y2) override;
    int LoadTexture(const char* filePath) override;
    void RenderFrame() override;
    bool Initialize() override;
    std::string Name() const override;

	void Shutdown() override;

private:
    // Internal OpenGL state, window/context handles, etc.
    // e.g., HWND m_window; HDC m_dc; HGLRC m_glrc; etc.
};