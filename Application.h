#include <SFML/Graphics.hpp>
#include <iostream>
#include "DataStorage.h"
#include "DrawManager.h"
#include "EventManager.h"

#ifndef APPLICATION 
#define APPLICATION 

class Application
{
public:
    DrawManager drawManager;
    EventManager eventManager;
    DataStorage dataStorage;
    
};

void Application::run()
{
        while (dataStorage.window.isOpen())
        {}
        return;
}

#endif
