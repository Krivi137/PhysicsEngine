#include "Engine/Application.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

Application::Application()
{
}

void Application::run()
{
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
        
        // clear the window with black color
        window.clear(sf::Color::Black);

        window.display();
    }
}