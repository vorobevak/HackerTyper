#include <SFML/Graphics.hpp>
#include <iostream>
#include "DataStorage.h"
#include "DrawManager.h"
#include "EventManager.h"
#include "Application.h"

class DataStorage{};
class DrawManager{};
class EventManager
{
public:
    
    sf::Event event;
    
};

class Application
{
public:
    DrawManager drawManager;
    EventManager eventManager;
    DataStorage dataStorage;
};







int main()
{
    Application app;
    app.run();
    return 0;
}
