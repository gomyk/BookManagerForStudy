#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Book.h"

class Application {
private:
	Book* head;
	Book* tail;
public:
	Application();
	void run();
	void Addbook();
	void Search();
	void Delete(Book* position);
	void sort();
	Book* searchbytype(string input, int n, Book* posit);
	~Application() {
		delete head; 
		delete tail;

	}
}; 
 