#include "UI.h"

UI::UI() {
	base = 3;
	indent = 4;
}

void UI::printIndent() {
	printf("£ü");
	for (int i = 0; i < this->indent; ++i) {
		printf(" ");
	}
}
void UI::setIndent(int indent) {
	this->indent = indent;
}
int UI::load_menu(string title,string menu[], int size) {
	system("cls");
	printf("\n");
	cout <<"¡¸£þ" << title << "\n£ü\n";
	for (int i = 0; i < size; ++i) {
		printIndent();
		cout << "<" << i + 1 << "> " << menu[i] << "\n";
	}
	drawCursor(base);
	return selectMenu(base + size);
}

void UI::gotoxy(int x, int y){
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int UI::selectMenu(int limit) {
	int pos = base;
	while (1) {
		int input = _getch();
		clearCursor(pos);
		switch (input) {
		case 80: {
			pos = pos + 1 > limit-1 ? pos : pos + 1;
			break;
		}
		case 72: {
			pos = pos - 1 < base ? pos : pos - 1;
			break;
		}
		case 13: {
			system("cls");
			return pos-base; }
		}
		drawCursor(pos);
	}
}

void UI::clearCursor(int pos) {
	gotoxy(2, pos);
	printf("   ");
}

void UI::drawCursor(int pos) {
	gotoxy(2, pos);
	printf("¢º");
}
