#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "fraction.h"
#include "FractionUtility.h"
using namespace std;




class Point {
public:
	Point();
	Point(int);
	Point(int, int);
	Point(int, int, int, int);
	Point(const Fraction&);
	Point(const Fraction&, const Fraction&);
	Point(const Point&);
	~Point();

	int getQuadrant();
	int getQuadrant(const Point&);
	void moveBy(Fraction, Fraction);
	void moveBy(int);
	void flipByXaxis();
	void FlipByYaxis();
	void FlipThroughOrigin();
	void print();


	Point operator=(const Point&);
	Point operator+(const Point&);
	Point operator-(const Point&);
	Point operator*(const Point&);
	Point operator/(const Point&);

	friend std::ostream& operator<<(std::ostream &out, const Point &P);
//	friend std::ostream& operator>>(std::ostream &in, const Point &P);



private:
	Fraction frx;
	Fraction fry;
};

std::ostream& operator<<(std::ostream &out, const Point &P) {
	out << "(" << P.frx << "," << P.fry << ")";
	return out;
}

//std::ostream& operator>>(std::ostream &in, const Point &P) {
//	cout << "\n    X-coordinate : ";
//	cin >> P.frx;
//	return in;
//}


#endif








