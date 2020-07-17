#pragma once
#include <string>
using namespace std;

class Book {
private:
	string title;
	string author;
	int pages;
	string publisher;
	int price;
	string category;
public:
	Book* next = NULL;

	Book() { }
	
	Book(string title, string author, int pages, string publisher, int price, string category) {
		this->title = title;
		this->author = author;
		this->pages = pages;
		this->publisher = publisher;
		this->price = price;
		this->category = category;
	}
	
	string getTitle() {
		return title;
	};
	string getAuthor() {
		return author;
	};
	string getpuPlisher() {
		return publisher;
	};
	int getpages() {
		return pages;
	};
	int getprice() {
		return price;
	};
	string getcategory() {
		return category;
	};

	
};
