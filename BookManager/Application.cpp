#include "Application.h"

Application::Application() {
	//Default constructor
}
void addbook() {
	cout << "choose addbook";

};
void search(){
	cout << "choose searcch"<<endl<<"sarch menu : 1.title 2.author 3.publisher";
	int input = _getch();
	switch (input) {
	case 49: break;

	case 50: break;

	case 51: break;

	case 8: search(); break;
	}
};
int off() {
	cout << "choose off";
		return 0;
};

void Application::run() {
	cout << "application is running" << endl << "1.addbook 2.search 3.programoff" << endl;
	int input = _getch();
	switch (input) {
	case 49: addbook(); break;
	case 50: search(); break;
	case 51: off(); break;
	case 8: break;
	}

}