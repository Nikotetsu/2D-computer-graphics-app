#include "../include/main.hpp"
#include "../include/application.hpp"

int main(int argc, char *argv[]){
	Application app;
	app.init();
	app.run();
	app.end();
	return 0;

}