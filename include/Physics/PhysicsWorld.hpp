#pragma once

#include <vector>
#include "Physics/Particle.hpp"

class PhysicsWorld
{
public:

    // ===== Constructors =====

    PhysicsWorld();

    // ===== Particle Management =====

    Particle& createParticle(
        const Vec2& position,
        const Vec2& velocity,
        float mass
    );

    const std::vector<Particle>& getParticles() const;
    
    // ===== Simulation =====

    void step(float dt);

private:

    // ===== World State =====

    std::vector<Particle> particles;
    Vec2 gravity;
};