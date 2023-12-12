#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "main.hpp"

class Application{
    protected:
        sf::RenderWindow *Window;

    public:
        Application();
        ~Application();
        void init();
        void run();
        void end();
};

#endif