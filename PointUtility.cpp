#include "Menu.h"
#include "Fraction.h"
#include "FractionUtility.h"
#include "Point.h"
#include "PointUtility.h"
using namespace std;



void initPoint(Point** pt1, Point** pt2) {
	Fraction *frxPtr = nullptr;
	Fraction *fryPtr = nullptr;

	cout << "\nEnter coordinates of Point 1"
		<< "\n    X-coordinate : ";
	initFraction(&frxPtr);
	cout << "\n    Y-coordinate : ";
	initFraction(&fryPtr);
	*pt1 = new Point(*frxPtr, *fryPtr);
	delete frxPtr;
	delete fryPtr;

	cout << "\nEnter coordinates of Point 2"
		<< "\n    X-coordinate : ";
	initFraction(&frxPtr);
	cout << "\n    Y-coordinate : ";
	initFraction(&fryPtr);
	*pt1 = new Point(*frxPtr, *fryPtr);
	delete frxPtr;
	delete fryPtr;
}

void initPoint(Point** pt, int pnum) {
	Fraction *frxPtr = nullptr;
	Fraction *fryPtr = nullptr;

	cout << "\nEnter coordinates of Point " << pnum
		<< "\n    X-coordinate : ";
	initFraction(&frxPtr);
	cout << "\n    Y-coordinate : ";
	initFraction(&fryPtr);
	*pt = new Point(*frxPtr, *fryPtr);
	delete frxPtr;
	delete fryPtr;
}

void initPoint(Point** pt) {
	Fraction *frxPtr = nullptr;
	Fraction *fryPtr = nullptr;

	cout << "\n    X-coordinate : ";
	initFraction(&frxPtr);
	cout << "\n    Y-coordinate : ";
	initFraction(&fryPtr);
	*pt = new Point(*frxPtr, *fryPtr);
	delete frxPtr;
	delete fryPtr;
}