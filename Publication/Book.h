#pragma once
#include <string>
#include "Publication.h"

class Book : public Publication
{
private:
	int nPages;
public:
	Book(); // default constructor
	Book(string t, string a, string i, double c, int p); // overloaded constructor
	void display();
};

