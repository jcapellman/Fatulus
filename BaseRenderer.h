#pragma once
#include "Main.h"

// Abstract base class for all renderer types (graphics, sound, etc.)
class BaseRenderer {
public:
    virtual ~BaseRenderer() = default;

    // Initialize the renderer (graphics or sound)
    virtual bool Initialize() = 0;

    virtual std::string Name() const = 0;

    // Shutdown and cleanup
    virtual void Shutdown() = 0;
};