#include "Engine/Application.hpp"
#include "Math/Vec2.hpp"
#include "Physics/Particle.hpp"
#include<iostream>
int main()
{
    Vec2 pos(3.0f, 4.0f);
    Vec2 vel(3.0f, 4.0f);
    float mass = 0.5f;

    Particle p(pos, vel, mass);

    std::cout<< p.velocity.x;

    Application app;
    app.run();

    return 0;
}