#pragma once
#include<stdio.h>

class Application {
	
public:
	Application();
	void run();
};

Application::Application() {
	//Default constructor
}

void Application::run() {
	printf("run application is running");

}