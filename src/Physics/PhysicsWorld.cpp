#include "Physics/PhysicsWorld.hpp"

// ===== Constructors =====

PhysicsWorld::PhysicsWorld()
    :gravity(0.0f,-9.81f),
    wind(40.0f,0.0)
{
}

// ===== Particle Management =====

Particle& PhysicsWorld::createParticle(
    const Vec2& position,
    const Vec2& velocity,
    float mass
)
{
    particles.emplace_back(position, velocity, mass);

    return particles.back();
}

const std::vector<Particle>& PhysicsWorld::getParticles() const
{
    return particles;
}

// ===== Simulation =====

void PhysicsWorld::step(float dt)
{
    for (Particle& particle : particles)
    {
        Vec2 gravityForce= gravity * particle.mass;
        particle.applyForce(gravityForce);
        particle.applyForce(wind);
        particle.integrate(dt);
    }
}

// ===== World State =====
