#include "Engine/Application.hpp"
#include "Math/Vec2.hpp"
#include "Physics/Particle.hpp"
#include "Physics/PhysicsWorld.hpp"

#include<iostream>
int main()
{
    Vec2 pos(3.0f, 4.0f);
    Vec2 vel(0.0f, 0.0f);
    float mass = 0.5f;
    float dt = 1.0f/60.0f;
    PhysicsWorld world;
    Particle& p = world.createParticle(pos, vel, mass);
    
    for(int i = 0; i < 10; i++){
        world.step(dt);
        std::cout<<p.position.y<<'\n';
    }

    Application app;
    app.run();

    return 0;
}