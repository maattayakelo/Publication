#include "stdafx.h"
#include "Book.h"
#include <iostream>

// default constructor - call the Publication default constructor implicitly
Book::Book()
{
	//cout << "in Book default constructor " << endl;
	nPages = 0;
}

// overloaded constructor - calls the Publication overloaded constructor
Book::Book(string t, string a, string i, double c, int p)
	: Publication(t, a, i, c)
{
	//cout << "in Book overloaded constructor " << endl;
	nPages = p;
}

void Book::display()
{
	cout << "Book Title:" << endl;
	cout << "title: " << title << " author: " << author << " ISBN: " << ISBN << " cost: " << cost << endl;
	cout << "pages: " << nPages << endl;
}




