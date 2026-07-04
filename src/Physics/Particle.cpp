#include "Physics/Particle.hpp"

Particle::Particle()
    : position(0.0f, 0.0f),
      velocity(0.0f, 0.0f),
      acceleration(0.0f, 0.0f),
      forceAccumulator(0.0f, 0.0f),
      mass(1.0f),
      inverseMass(1.0f)
{
}

Particle::Particle(
    const Vec2& position,
    const Vec2& velocity,
    float mass
)
    : position(position),
      velocity(velocity),
      acceleration(0.0f, 0.0f),
      forceAccumulator(0.0f, 0.0f),
      mass(mass),
      inverseMass(mass > 0.0f ? 1.0f / mass : 0.0f)
{
}
