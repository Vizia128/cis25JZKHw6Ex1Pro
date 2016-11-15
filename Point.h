#ifndef POINT_H
#define POINT_H
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






private:
	Fraction frx;
	Fraction fry;
};




#endif








