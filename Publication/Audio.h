#pragma once
#include <string>
#include "Publication.h"


class Audio : public Publication
{
private: 
	int minutes;
public:
	Audio(); // default constructor
	Audio(string t, string a, string i, double c, int m); // overloaded constructor
	void display();
};

