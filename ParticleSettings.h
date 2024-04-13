#pragma once

#include <SFML/Graphics/Color.hpp>
#include <memory>

#include "EasingCurves.h"

struct ParticleSettings {
    float lifetime;
    float size;
    float speed;
    float angle;
    float rotationSpeed;
    sf::Color startColor;
    sf::Color endColor;
    bool isDrawTrail;
    int trailSize;
    std::shared_ptr<EasingCurve> particleSizeCurve;
    std::shared_ptr<EasingCurve> rgbCurve;
    std::shared_ptr<EasingCurve> alphaCurve;

    ParticleSettings(float lifetime, float size, float speed, float angle, float rotationSpeed, const sf::Color& startColor, const sf::Color& endColor, bool isDrawTrail, int trailSize, std::shared_ptr<EasingCurve> particleSizeCurve, std::shared_ptr<EasingCurve> rgbCurve, std::shared_ptr<EasingCurve> alphaCurve)
        : lifetime(lifetime),
        size(size),
        speed(speed),
        angle(angle),
        rotationSpeed(rotationSpeed),
        startColor(startColor),
        endColor(endColor),
        isDrawTrail(isDrawTrail),
        trailSize(trailSize),
        particleSizeCurve(particleSizeCurve),
        rgbCurve(rgbCurve),
        alphaCurve(alphaCurve)
    {}
};
