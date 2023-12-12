#include "../headers/main.hpp"
#include "../headers/application.hpp"

int main(int argc, char *argv[]){
	Application app;
	app.init();
	app.run();
	app.end();
	return 0;

}