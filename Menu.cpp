#include <iostream>
#include "Menu.h"
#include "Fraction.h"
#include "FractionUtility.h"
#include "Point.h"
#include "PointUtility.h"
using namespace std;

void menuHw6Ex1() {
	Fraction fa (1, 2), fb (2, 3), fc (3, 4), fd (4, 5), f;

	f = fa / fb;
	fa /= fb;

	cout << "\nf : ";
	f.print();
	cout << "\nfa : ";
	fa.print();
	int pb;cin >> pb;

}