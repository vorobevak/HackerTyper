#include <SFML/Graphics.hpp>
#include <iostream>
#include "DataStorage.h"
#include "DrawManager.h"
#include "Application.h"

#ifndef EVENTMANAGER
#define EVENTMANAGER

class EventManager
{
public:
    
    sf::Event event;
    Application * app = nullptr;
    EventManager(Application * appPtr) : app = appPtr
    {}
    
    void checkEvents();
};




void EventManager :: checkEvents()
{
    if (event.type == sf::Event::Closed)
    {
            app->drawManager.window.close();
    }

    if (event.type == sf::Event::KeyPressed)
    {
        std::cout << "Key pressed" << std::endl;
        fflush(0);
    }
}

#endif
