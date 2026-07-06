#include "Engine/Application.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

Application::Application()
{
    world.createParticle(
        Vec2(400.0f, 400.0f),
        Vec2(0.0f, 0.0f),
        1.0f
    );
}

void Application::run()
{
    float dt = 1.0f / 60.0f;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Physics Engine");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
            
        }
        world.step(dt); 
        // clear the window with black color
        window.clear(sf::Color::Black);

        for (const Particle& particle : world.getParticles())
        {
            sf::CircleShape shape(10.0f);

            shape.setOrigin({10.0f, 10.0f});

            shape.setPosition({
                particle.position.x,
                600.0f - particle.position.y
            });

            window.draw(shape);
        }

        window.display();
    }
}