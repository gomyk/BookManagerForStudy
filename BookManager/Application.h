#pragma once
#include <iostream>
#include <conio.h>
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
	void showlist();
	~Application() {
		delete head;
		delete tail;

	}
}; 
 