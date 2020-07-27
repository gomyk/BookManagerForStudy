#pragma once
#include <string>
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

class UI {
private:
	int base;
	int indent;
	void printIndent();
	void gotoxy(int x, int y);
	int selectMenu(int limit);
	void clearCursor(int pos);
	void drawCursor(int pos);
	
public:
	UI();
	void setIndent(int indent);
	int load_menu(string title, string  menu[], int size);
};