#include <SFML/Window.hpp>

int main()
{
    sf::Window window;
    window.create(sf::VideoMode({800, 600}), "My window");
    
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