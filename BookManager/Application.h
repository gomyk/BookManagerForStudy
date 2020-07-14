#pragma once
#include <iostream>
#include <conio.h>
#include "Book.h"

class Application {
private:
	Book* head = NULL;
	Book* tail = NULL;
public:
	Application() ;
	void run();
	void Addbook();
	void Search();
	void Delete();

}; 
 