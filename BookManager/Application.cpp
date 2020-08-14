#include "Application.h"
#include "UI.h"
using namespace std;
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
	if (head->next == tail) {
		cout << "there isn't any book in the list!!!(pls add book first)";
		Sleep(1000);
		return;
	}
	while (1) {
		system("cls");
		cout << "choose search\n" << "sarch menu \n1.title \n2.author \n3.publisher\n4.category\n5.price\n6.sort the book\n";
		int input = _getch();
		switch (input) {
		case 49: {string title;
			cout << "\ninput title that u wanna find :";
			cin >> title;
			while (posit != tail) {
				posit = searchbytype(title, 1, posit);
				if (posit == NULL)  break; 
				cout << "***book founded***\n";
				posit->Bookinfo();
				cout<< "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
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
					cout << "***book founded***\n";
					posit->Bookinfo();
					cout << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
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
				cout << "***book founded***\n";
				posit->Bookinfo();
				cout << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
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
				cout << "***book founded***\n";
				posit->Bookinfo();
				cout << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
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
				cout << "***book founded***\n";
				posit->Bookinfo();
				cout << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
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
		case 54: {sort();
			cout << "\n1.Bring \"n\"th Book 2.Back to menu\n";
			int n;
			Book* temp=head;
			int menu = _getch();
			switch (menu) {
			case 49: {cout << "\ninput \"n\"\n";
				cin >> n;
				if (n == 0) {
					cin >> n;
				}
				for (int i = 1; i <= n; i++) {
					temp = temp->next;
				}
				temp->Bookinfo();
				cout << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
				int menu = _getch();
				switch (menu) {
				case 49: break;
				case 50: Delete(temp); return;
				case 8: return;
				}
			 }//case 1
			case 50: return;
			case 8: return;
			}
		}break;

		case 8: return;//backspace
		}
	}
};

void Application::run() {
	UI ui;	
	while (1) {
		string temp[3] = { "Add Book","Search Book","Exit" };
		int command = ui.load_menu("Main menu", temp, 3);
		cout << temp[command];
		system("cls");
		switch (command) {
		case 0: Addbook(); break;
		case 1: Search(); break;
		case 2: Sleep(1000); cout << "program off"; Sleep(1000); return;
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
void Application::sort(){
	system("cls");
	int i,j,k;
	int n;
	Book* posit = (head->next)->next;
	Book* posit2;
	Book* posit3;
	Book* posit4;
	Book* temp;
	string title;
	string title2;
	for (posit; posit != tail; posit = posit->next) {
				
		title = posit->getTitle();
		
		for (posit2=head->next; posit2 != posit; posit2 = posit2->next) {
			k = 0;
			title2 = posit2->getTitle();
			i = (int)(title[k]);
			j = (int)(title2[k]);
			if (i == j) {
				while (i == j) {
					k++;
					if (title.length() <= k&& title2.length() <= k) {
						break;
					}
					i = (int)(title[k]);
					j = (int)(title2[k]);
					
					
				}
			}
			if (i <= j) {
				
				temp = posit;
				posit3 = posit->prev;
				posit3->next = posit->next;
				(posit->next)->prev = posit3;
				posit4 = temp;
				temp = posit4;
				posit = posit3;
				posit4->prev = posit2->prev;
				posit4->next = posit2;
				posit2->prev = posit4;
				(posit4->prev)->next = posit4;

				break;
			}
			
		}//posit2 for;
	}//정렬
	//정렬
	//출력->
	Book* tem = head->next;
	n = 1;
	while (tem != tail) {
		cout << "\n--------"<< n <<"--------\n";
		tem->Bookinfo();
		tem = tem->next;
		n++;
	}	
	return;
}



