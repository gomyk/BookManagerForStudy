#include "Application.h"
#include <iostream>
#include "UI.h"

using namespace std;

int main() {
	//Start Application.
	Application* application = new Application();
	
	application->run();
	delete application;
}