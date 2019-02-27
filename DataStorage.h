#include <SFML/Graphics.hpp>
#include <iostream>
#include "DrawManager.h"
#include "EventManager.h"
#include "Application.h"

#ifndef DATASTORAGE
#define DATASTORAGE

class DataStorage
{
public:
    
    sf::RenderWindow window; // если здесь написатьsf::RenderWindow window(sf::VideoMode(800, 600), "My okno") - ругается 
    sf::Texture texture;

    sf::Sprite sprite;

    sf::Font font;


    sf::Text text;
    
    DataStorage() : window(sf::VideoMode(800, 600), "My okno"), sprite(texture), text("jlkjdfslkjdlsf\nnew line", font, 40)// а так работает
    {
        texture.loadFromFile("logo.png");
        font.loadFromFile("arial.ttf");
        
    };
};

#endif
