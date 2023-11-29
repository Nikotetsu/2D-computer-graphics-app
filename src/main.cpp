#include <iostream>
#include <SFML\Graphics.hpp>
using namespace sf;
int main(){
	std::cout<<"Hello, mine"<<std::endl;
	//sf::RenderWindow window(sf::VideoMode(800,600), "My window");
	RenderWindow window(VideoMode(1500,900), "New");
	return 0;
}