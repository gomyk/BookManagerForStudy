#pragma once
#include <string>
using namespace std;

class Book {
private:
	string title;
	string author;
	string pages;
	string publisher;
	string price;
	string category;
public:
	Book* next = NULL;
	Book* prev = NULL;

	Book() { }
	
	Book(string title, string author, string pages, string publisher, string price, string category) {
		this->title = title;
		this->author = author;
		this->pages = pages;
		this->publisher = publisher;
		this->price = price;
		this->category = category;
	}

	void Bookinfo() {
		cout << "***book founded***\n" << "bookTitle : " << getTitle() << "\nbookAuthor : " << getAuthor() << "\nbookPublisher : " << getPublisher() << "\n1.keep searching\n2.delete the book from program\n(press backpace to go back)";
		return;
		}
	string getTitle() {
		return title;
	};
	string getAuthor() {
		return author;
	};
	string getPublisher() {
		return publisher;
	};
	string getpages() {
		return pages;
	};
	string getprice() {
		return price;
	};
	string getcategory() {
		return category;
	};

	
};
