#include "Application.h"

Application::Application() {
	//Default constructor
}
void addbook() {
	cout << "choose addbook";
};

void search(){
	while (1) {
		system("cls");
		cout << "choose searcch" << endl << "sarch menu \n1.title \n2.author \n3.publisher\n";
		int input = _getch();
		switch (input) {
		case 49: break;

		case 50: break;

		case 51: break;

		case 8: return;
		}
	}
};
int off() {
	cout << "choose off";
		return 0;
};

void Application::run() {
	while (1) {
		system("cls");
		cout << "application is running" << endl << "1.addbook \n2.search \n3.programoff\n";
		int input = _getch();
		switch (input) {
		case 49: addbook(); break;
		case 50: search(); break;
		case 51: off(); break;
		case 8: off(); break;
		}
	}
}