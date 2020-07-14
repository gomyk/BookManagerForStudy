#include "Application.h"

Application::Application() {
	
	head->next = tail;
	tail->next = NULL;
	//Default constructor
}

void Application::Addbook() {
	string title;
	string author;
	int pages;
	string publisher;
	int price;
	string category;

	cout << "input from keyborad\n";
	cout << "Input Title : ";
	cin >> title;
	cout << "Input Author :";
	cin >> author;
	cout << "input pages :";
	cin >> pages;
	cout << "input publisher :";
	cin >> publisher;
	cout << "input price :";
	cin >> price;
	cout << "category :";
	cin >> category;

	Book* temp = new Book(title, author, pages, publisher, price, category);
	Book* position = head;
	while (position->next != tail) {
		position = position->next;
	}
	position->next = temp;
	temp->next = tail;
};

void Application::Search(){
	while (1) {
		Book* posit = head;
		system("cls");
		cout << "choose searcch" << endl << "sarch menu \n1.title \n2.author \n3.publisher\n4.category\n5.price\n6.pages";
		int input = _getch();
		switch (input) {
		case 49: {string title;
			cout << "\ninput title that u wanna find :";
			cin >> title;
			while (posit->next != tail){
				if(posit->getTitle() == title){
					cout << "***book founded***\n"<<"booktitle : "<<posit->getTitle()<< "\nbookaurthor : "<<posit->getauthor()<< "\nbookpublisher"<<posit->getpublisher()<<"\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 50: break;
					case 51: Delete(); break;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "not exist!!";
			return; }//1.title

		case 50: break;//2.author

		case 51: break;//3.publisher

		case 52: break;//4.category

		case 53: break;//5.price

		case 54: break;//6.pages

		case 8: return;//backspace
		}
	}
};
int off() {
	cout << "program off";
		return 0;
};

void Application::run() {
	while (1) {
		system("cls");
		cout << "application is running" << endl << "1.addbook \n2.search \n3.program off\n";
		int input = _getch();
		switch (input) {
		case 49: Addbook(); break;
		case 50: Search(); break;
		case 51: off(); break;
		case 8: off(); break;
		}
	}
}
void Application::Delete() {

}