#include "Menu.h"
#include "Fraction.h"
#include "FractionUtility.h"
#include "Point.h"
#include "PointUtility.h"
using namespace std;




Point::Point() : frx(), fry() {
}
Point::Point(int nx) : frx(nx, 1), fry(nx, 1) {
}
Point::Point(int nx, int dx) : frx(nx, dx), fry(nx, dx) {
}
Point::Point(int nx, int dx, int ny, int dy) : frx(nx, dx), fry(ny, dy) {
}
Point::Point(const Point& ref) : frx(ref.frx), fry(ref.fry) {
}




int Point::getQuadrant() {
	if (frx.getNum() > 0 && fry.getNum() > 0)
		return 1;
	else if (frx.getNum() < 0 && fry.getNum() > 0)
		return 2;
	else if (frx.getNum() < 0 && fry.getNum() < 0)
		return 3;
	else if (frx.getNum() > 0 && fry.getNum() < 0)
		return 4;
	else
		return 0;
}


int Point::getQuadrant(const Point& p) {
	if (p.frx.getNum() > 0 && p.fry.getNum() > 0)
		return 1;
	else if (p.frx.getNum() < 0 && p.fry.getNum() > 0)
		return 2;
	else if (p.frx.getNum() < 0 && p.fry.getNum() < 0)
		return 3;
	else if (p.frx.getNum() > 0 && p.fry.getNum() < 0)
		return 4;
	else
		return 0;
}


void Point::moveBy(Fraction delx, Fraction dely) {
	frx += delx;
	fry += dely;
}




void Point::moveBy(int del) {
	frx.update(del);
	fry.update(del);
}




void flipByXaxis() {
}
void FlipByYaxis() {
}
void FlipThroughOrigin() {
}
void print() {
}


Point Point::operator=(const Point& p) {
	frx = p.frx;
	fry = p.fry;
	return p;
}


Point Point::operator+(const Point& p) {
	return (frx.getNum() * p.frx.getDenom() + frx.getDenom() * p.frx.getNum(),
		frx.getDenom() * p.frx.getDenom(),
		fry.getNum() * p.fry.getDenom() + fry.getDenom() * p.fry.getNum(),
		fry.getDenom() * p.fry.getDenom());
}


Point Point::operator-(const Point& p) {
	return (frx.getNum() * p.frx.getDenom() - frx.getDenom() * p.frx.getNum(),
		frx.getDenom() * p.frx.getDenom(),
		fry.getNum() * p.fry.getDenom() - fry.getDenom() * p.fry.getNum(),
		fry.getDenom() * p.fry.getDenom());
}


Point Point::operator*(const Point& p) {
	return (frx.getNum() * p.frx.getNum(), frx.getDenom() * p.frx.getDenom(),
		fry.getNum() * p.fry.getNum(), fry.getDenom() * p.fry.getDenom());
}


Point Point::operator/(const Point& p) {
	return (frx.getNum() * p.frx.getDenom(), frx.getDenom() * p.frx.getNum(),
		fry.getNum() * p.fry.getDenom(), fry.getDenom() * p.fry.getNum());
}




