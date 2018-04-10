#include "stdafx.h"
#include "Audio.h"
#include "Book.h"
#include <iostream>
using namespace std;

int main()
{
	//-----------------------------------------------------------------------------
	// Practice 1 - create the classes and inheritance releationship
	// mybook of type Book which inherits from Publicatino
	// myaudio of type Audio which inherits from Publication
	Book mybook("The Stand", "Stephen King", "23243asd", 34.00, 500);
	Audio myaudio("Salem's Lot", "Stephen King", "1232123sss", 50.00, 1200);

	//-----------------------------------------------------------------------------
	// Practice 2 - now dynamically create arrays of books and audio
	int num;
	Book *bptr = NULL;
	Audio *aptr = NULL;
	cout << "how many books? ";
	cin >> num;
	bptr = new Book[num];  // allocates memory for array of num Books and returns the pointer to bptr
	cout << "how many audio? ";
	cin >> num;
	aptr = new Audio[num]; // allocates memory for array of num Audio and returns the pointer to aptr

	// do stuff w/ array
	;;;
	// now delete dynamically allocated memory
	delete [] bptr;
	delete [] aptr;

	//-------------------------------------------------------------------------------
	// Practice 3 - Domonstrate poloymorphism & used double pointer lists 
	Publication **ptr = NULL;
	char answer;
	num = 5; // hard coded here, but could read in from user
	ptr = new Publication*[num];  // allocate an array of Publication pointers

	for (int i = 0; i < num; i++)
	{
		cout << "if book enter b, if audio enter a --> ";
		cin >> answer;
		if (answer == 'b' || answer == 'B')
		{
			ptr[i] = new Book();
			// can call a get Data method here - TBD do this!
		}
		else
		{
			ptr[i] = new Audio();
			// can call a get data method here -- TBD do this!
		}
	}
	 // we haven't filled the objects w/ interesting data yet, but if i wanted to display the contents
	// i could do this in a loop
	for (int i = 0; i < num; i++)
	{
		ptr[i]->display();  // note the use of the -> operator instead of . operator
							// example of run-time polymorphism becuase only at run time do we determine
							// which display() function will be executed - the one belonging to book or to audio
	}

	// now do something w/ my array
	// once Im done processing i must clean up my memory
	for (int i = 0; i < num; i++)
	{
		delete ptr[i];
	}
	delete[] ptr;

	return 0;

}