#include "../include/application.hpp"
#include <iostream>

Application::Application():
    Window(nullptr){
        std::cout<<"Started..."<<std::endl;
    }

Application::~Application(){
    std::cout<<"Finished...";
}

void Application::init(){
    Window = new sf::RenderWindow(sf::VideoMode(1200,720), "2D_grphics_app");
}

void Application::run(){
    while(Window->isOpen()){
        sf::Event event;
        while(Window->pollEvent(event)){
            if(event.type == sf::Event::Closed){
                Window->close();
            }
        }
    }
}

void Application::end(){
    if(Window != nullptr){
        delete Window;
    }
}