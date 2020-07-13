#pragma once
#include <iostream>
#include <conio.h>
#include "Book.h"
using namespace std;
class Application {
private:
	Book* head = NULL;
	Book* tail = NULL;
public:
	Application();
	void run();
	void addbook();
}; 
 