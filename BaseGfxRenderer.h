#pragma once

#include "BaseRenderer.h"

// Abstract base class for graphics renderers
class BaseGfxRenderer : public BaseRenderer {
public:
    virtual ~BaseGfxRenderer() = default;

    virtual bool Init(int width, int height, const char* title) = 0;
    virtual void Clear() = 0;
    virtual void Present() = 0;
    virtual void Resize(int width, int height) = 0;

    virtual void DrawQuad(float x, float y, float width, float height, int textureId) = 0;
    virtual void DrawLine(float x1, float y1, float x2, float y2) = 0;
    virtual int LoadTexture(const char* filePath) = 0;
    virtual void RenderFrame() = 0;
};