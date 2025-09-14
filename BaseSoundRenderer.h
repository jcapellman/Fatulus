#pragma once

#include "BaseRenderer.h"

// Abstract base class for sound renderers
class BaseSoundRenderer : public BaseRenderer {
public:
    virtual ~BaseSoundRenderer() = default;

    // Play a sound by filename or ID
    virtual void PlaySound(const char* soundId) = 0;

    // Stop all sounds
    virtual void StopAll() = 0;
};