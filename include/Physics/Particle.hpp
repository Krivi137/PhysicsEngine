#pragma once

#include "Math/Vec2.hpp"

class Particle
{
public:

    // ===== Constructors =====

    Particle();
    Particle( 
        const Vec2& position,
        const Vec2& velocity,
        float mass
    );

    // ===== Physics =====

    void applyForce(const Vec2& force);
    void clearForces();
    void integrate(float dt);

public:

    // ===== State =====

    Vec2 position;
    Vec2 velocity;
    Vec2 acceleration;

    // Sum of all forces applied during the current simulation step.
    Vec2 forceAccumulator;

    float mass;
    float inverseMass;
};