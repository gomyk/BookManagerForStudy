#pragma once
#include <iostream>
#include <conio.h>
#include "Book.h"

class Application {
private:
	Book* head = new Book();
	Book* tail = new Book();
public:
	Application() ;
	void run();
	void Addbook();
	void Search();
	void Delete(Book* position);
	void showlist();

}; 
 