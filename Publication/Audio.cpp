#include "stdafx.h"
#include "Audio.h"
#include <iostream>

// default constructor - calls default Publication constructor
Audio::Audio()
{
	//cout << "in Audio default constructor" << endl;
	minutes = 0;
}

// overloaded constructor - calls overladed Publication constructor
Audio::Audio(string t, string a, string i, double c, int m)
	: Publication(t,a,i,c)
{
	//cout << "in Audio overloaded constructor" << endl;
	minutes = m;
}

void Audio::display()
{
	cout << "Audio Title:" << endl;
	cout << "title: " << title << " author: " << author << " ISBN: " << ISBN << " cost: " << cost << endl;
	cout << "minutes: " << minutes << endl;
}