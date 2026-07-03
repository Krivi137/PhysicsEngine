#include "Engine/Application.hpp"

#include <SFML/Window.hpp>

Application::Application()
{
}

void Application::run()
{
    sf::Window window;
    window.create(sf::VideoMode({800, 600}), "Physics Engine");
    
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }
}