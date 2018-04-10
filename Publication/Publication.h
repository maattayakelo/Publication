#pragma once
#include <string>
using namespace std;

class Publication
{
protected:
	string title;
	string author;
	string ISBN;
	double cost;
public:
	Publication();
	Publication(string t, string a, string i, double c);
	virtual void display();
};

