cmake_minimum_required(VERSION 3.20)

project(PhysicsEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

add_executable(PhysicsEngine
    src/main.cpp
    src/Engine/Application.cpp
    src/Math/Vec2.cpp
    src/Physics/Particle.cpp
    src/Physics/PhysicsWorld.cpp
)

target_include_directories(PhysicsEngine PRIVATE
    include
)

target_link_libraries(PhysicsEngine PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
)