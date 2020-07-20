#include "Application.h"
#include <windows.h>

Application::Application() {
	head = new Book();
	tail = new Book();
	head->next = tail;
	tail->prev = head;
	//Default constructor
}

Book* Application::searchbytype(string input, int n, Book* posit) {
	
	string compare;
	int m;
	
	while (posit != tail) {
		m = 0;
		switch (n) {
		case 1: compare = posit->getTitle(); break;
		case 2: compare = posit->getAuthor(); break;
		case 3: compare = posit->getPublisher(); break;
		case 4: compare = posit->getcategory(); break;
		case 5: compare = posit->getprice(); break;
		case 6: compare = posit->getpages(); break;
		}
		while (input[m]!='\0') {
			
			if (input[m] != compare[m]) {
				break;
			}
			m++;
		}
		if (input[m] == '\0') {
			return posit;
		}
		posit = posit->next;
	}
	return NULL;
}


void Application::Addbook() {
	string title;
	string author;
	string pages;
	string publisher;
	string price;
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
	tail->prev = temp;
	temp->next = tail;
	temp->prev = position;
	cout << "Complete";
	Sleep(1000);
};

void Application::Search(){
	Book* posit= head;
	while (1) {
		system("cls");
		cout << "choose search\n" << "sarch menu \n1.title \n2.author \n3.publisher\n4.category\n5.price\n6.pages";
		int input = _getch();
		switch (input) {
		case 49: {string title;
			cout << "\ninput title that u wanna find :";
			cin >> title;
			while (posit != tail) {
				posit = searchbytype(title, 1, posit);
				if (posit == NULL)  break; 
				posit->Bookinfo();
				int menu = _getch();
				switch (menu) {
				case 49: break;
				case 50: Delete(posit); return;
				case 8: return;
				}
				posit = posit->next;
			}

			cout << "\nnot exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			}
		}
			//1.title

		case 50: {string author;
			cout << "\ninput author that u wanna find :";
			cin >> author;
			while (posit != tail) {
				    posit = searchbytype(author, 2, posit);
					if (posit == NULL)  break;
					posit->Bookinfo();
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
					posit = posit->next;
			}
			cout << "\nnot exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//2.author

		case 51: {string publisher;
			cout << "\ninput title that u wanna find :";
			cin >> publisher;
			while (posit != tail) {
				posit = searchbytype(publisher, 3, posit);
				if (posit == NULL)  break;
				posit->Bookinfo();
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
					posit = posit->next;
			}
			cout << "\nnot exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//3.publisher

		case 52: {string category;
			cout << "\ninput title that u wanna find :";
			cin >> category;
			while (posit != tail) {
				posit = searchbytype(category, 4, posit);
				if (posit == NULL)  break;
				posit->Bookinfo();
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
					posit = posit->next;
				
			}
			cout << "\nnot exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//4.category//카테고리함수 나중에수정

		case 53: {string price;
			cout << "\ninput title that u wanna find :";
			cin >> price;
			while (posit != tail) {
				posit = searchbytype(price, 5, posit);
				if (posit == NULL)  break;
				posit->Bookinfo();
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
					posit = posit->next;
			
			}
			cout << "\nnot exist!!(press backpace to go back)";
			int fin = _getch();
			switch (fin) {
			case 8: return;
			} break;
		}//5.price

		case 54: {string pages;
			cout << "\ninput title that u wanna find :";
			cin >> pages;
			while (posit != tail) {
				posit = searchbytype(pages, 6, posit);
				if (posit == NULL)  break;
				posit->Bookinfo();
					int menu = _getch();
					switch (menu) {
					case 49: break;
					case 50: Delete(posit); return;
					case 8: return;
					}
					posit = posit->next;
				
			}
			cout << "\nnot exist!!(press backpace to go back)";
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
	Book* prevbook = position->prev;
	Book* nextbook = position->next;
	cout << "\nu sure to delete this book?(1.yes  2.no)\n";
	int input = _getch();
	switch (input) {
	case 49: 
		nextbook->prev = position->prev;
		prevbook->next = position->next;
		position = NULL;
		delete position;
		cout << "Delete complete";
		Sleep(2000);
		break;
	case 50: return;
	case 8: return;
	}

}

