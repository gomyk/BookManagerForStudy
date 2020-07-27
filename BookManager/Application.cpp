#include "Application.h"

Application::Application() {
	head = new Book();
	tail = new Book();
	head->next = tail;
	//Default constructor
}


void Application::Addbook() {
	string title;
	string author;
	int pages;
	string publisher;
	int price;
	string category;
	system("cls");

	cout << "input from keyborad\n";
	cout << "Input Title : ";
	cin >> title;
	cout << "Input Author : ";
	cin >> author;
	cout << "input pages : ";
	cin >> pages;
	cout << "input publisher : ";
	cin >> publisher;
	cout << "input price : ";
	cin >> price;
	cout << "category : ";
	cin >> category;

	Book* temp = new Book(title, author, pages, publisher, price, category);
	Book* position = head;
	while (position->next != tail) {
		position = position->next;
	}
	position->next = temp;
	temp->next = tail;
	cout << "Complete";
	Sleep(10000);
};

void Application::Search(){
	while (1) {
		Book* posit = head;
		system("cls");
		cout << "choose search\n" << "sarch menu \n1.title \n2.author \n3.publisher\n4.category\n5.price\n6.pages";
		int input = _getch();
		switch (input) {
		case 49: {string title;
			cout << "\ninput title that u wanna find :";
			cin >> title;
			while (posit != tail){
				if(posit->getTitle() == title){
					cout << "***book founded***\n"<<"bookTitle : "<<posit->getTitle()<< "\nbookAuthor : "<<posit->getAuthor()<< "\nbookPublisher : "<<posit->getpuPlisher()<<"\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "not exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			}
			}//1.title

		case 50: {string author;
			cout << "\ninput author that u wanna find :";
			cin >> author;
			while (posit != tail) {
				if (posit->getAuthor() == author) {
					cout << "***book founded***\n" << "booktitle : " << posit->getTitle() << "\nbookaurthor : " << posit->getAuthor() << "\nbookpublisher" << posit->getpuPlisher() << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "Book not exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//2.author

		case 51: {string publisher;
			cout << "\ninput title that u wanna find :";
			cin >> publisher;
			while (posit != tail) {
				if (posit->getpuPlisher() == publisher) {
					cout << "***book founded***\n" << "booktitle : " << posit->getTitle() << "\nbookaurthor : " << posit->getAuthor() << "\nbookpublisher" << posit->getpuPlisher() << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "not exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//3.publisher

		case 52: {string category;
			cout << "\ninput title that u wanna find :";
			cin >> category;
			while (posit != tail) {
				if (posit->getcategory() == category) {
					cout << "***book founded***\n" << "booktitle : " << posit->getTitle() << "\nbookaurthor : " << posit->getAuthor() << "\nbookpublisher" << posit->getpuPlisher() << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "not exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//4.category//카테고리함수 나중에수정

		case 53: {int price;
			cout << "\ninput title that u wanna find :";
			cin >> price;
			while (posit != tail) {
				if (posit->getprice() == price) {
					cout << "***book founded***\n" << "booktitle : " << posit->getTitle() << "\nbookaurthor : " << posit->getAuthor() << "\nbookpublisher" << posit->getpuPlisher() << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "not exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//5.price

		case 54: {int pages;
			cout << "\ninput title that u wanna find :";
			cin >> pages;
			while (posit != tail) {
				if (posit->getpages() == pages) {
					cout << "***book founded***\n" << "booktitle : " << posit->getTitle() << "\nbookaurthor : " << posit->getAuthor() << "\nbookpublisher" << posit->getpuPlisher() << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
				}
				posit = posit->next;
			}
			cout << "not exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//6.pages

		case 8: return;//backspace
		}
	}
};

void Application::run() {
	while (1) {
		system("cls");
		cout << "application is running\n" << "1.addbook \n2.search \n3.program off\n";
		int input = _getch();
		switch (input) {
		case 49: Addbook(); break;
		case 50: Search(); break;
		case 51: Sleep(1000); cout << "program off"; Sleep(1000); return;
		}
	}
}

void Application::Delete(Book* position) {
	Book* pos = head;
	cout << "\nu sure to delete this book?(1.yes  2.no)\n";
	int input = _getch();
	switch (input) {
	case 49: 
		while (pos->next != position) {
			pos = pos->next;
		}
		pos->next = position->next;
		position = NULL;
		delete position;
		cout << "Delete complete";
		Sleep(2000);
		break;
	case 50: return;
	case 8: return;
	}

}

void Application::showlist() {
	
}// 카테고리를 선택하면 그 가테고리에 있는 책이 나열되는 함수