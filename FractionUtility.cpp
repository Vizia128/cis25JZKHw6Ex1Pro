#include <iostream>
#include "Menu.h"
#include "Fraction.h"
#include "FractionUtility.h"
#include "Point.h"
#include "PointUtility.h"
using namespace std;

void init(Fraction** lPtr, Fraction** rPtr) {
	int n;
	int d;

	cout << "\nEnter numerator of left fraction : ";
	cin >> n;
	do {
		cout << "Enter denominator of left fraction : ";
		cin >> d;
		if (d == 0)
			cout << "\n  ERROR!! Denominator canNOT equal zero";
	} while (d == 0);

	*lPtr = new Fraction(n, d);



	cout << "\n\nEnter numerator of right fraction : ";
	cin >> n;
	do {
		cout << "Enter denominator of right fraction : ";
		cin >> d;
		if (d == 0)
			cout << "\n  ERROR!! Denominator canNOT equal zero";
	} while (d == 0);
	*rPtr = new Fraction(n, d);
}


void init(Fraction** fPtr) {
	int n;
	int d;


	cout << "\nEnter numerator : ";
	cin >> n;
	do {
		cout << "Enter denominator: ";
		cin >> d;
		if (d == 0)
			cout << "\n  ERROR!! Denominator canNOT equal zero";
	} while (d == 0);
	*fPtr = new Fraction(n, d);
}


int GreatestCommonDivisor(int n, int d) {
	return d == 0 ? n : GreatestCommonDivisor(d, n % d);
}






