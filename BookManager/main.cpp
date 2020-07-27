#include "Application.h"
#include <iostream>
#include "UI.h"

using namespace std;

int main() {
	//Start Application.
	Application* application = new Application();
	//application->run();
	UI ui;
	string temp[4] = { "Add Book","Search Book","Share Book","Exit" };
	int command = ui.load_menu("Main menu", temp, 4);
	cout << temp[command];
	delete application;
}