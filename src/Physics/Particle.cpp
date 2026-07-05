#include "Physics/Particle.hpp"

// ===== Constructors =====

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

 // ===== Physics =====

void Particle::applyForce(const Vec2& force){
    forceAccumulator+=force;
}

void Particle::clearForces(){
    forceAccumulator=Vec2();
}

void Particle::integrate(float dt){
    acceleration = forceAccumulator * inverseMass;
    velocity += acceleration * dt;
    position += velocity * dt;
    clearForces();
}