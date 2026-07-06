#pragma once

#include "Physics/PhysicsWorld.hpp"

class Application
{
public:
    Application();

    void run();

private:

    // ===== Physics =====

    PhysicsWorld world;
};