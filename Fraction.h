#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction {
public:

	Fraction();
	Fraction(int);
	Fraction(int, int);
	Fraction(const Fraction&);


	void print()const;
	~Fraction();
	int getNum()const;
	int getDenom()const;

	void update(int);
	void reduce();

	Fraction add(const Fraction&)const;
	Fraction subtract(const Fraction&)const;
	Fraction multiply(const Fraction&)const;
	Fraction divide(const Fraction&)const;


	friend	Fraction add(const Fraction&, const Fraction&);
	friend	Fraction subtract(const Fraction&, const Fraction&);
	friend	Fraction multiply(const Fraction&, const Fraction&);
	friend	Fraction divide(const Fraction&, const Fraction&);


	Fraction operator=(const Fraction&);
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);

	Fraction operator+=(const Fraction&);
	Fraction operator-=(const Fraction&);
	Fraction operator*=(const Fraction&);
	Fraction operator/=(const Fraction&);

	Fraction operator=(const int);
	Fraction operator+(const int);
	Fraction operator-(const int);
	Fraction operator*(const int);
	Fraction operator/(const int);

	friend std::ostream& operator<<(std::ostream &out, const Fraction &F);
//	friend std::ostream& operator>>(std::ostream &in, const Fraction &F);
	friend void print(const Fraction&, const Fraction&, const Fraction&);

private:
	int num;
	int denom;

};

std::ostream& operator<<(std::ostream &out, const Fraction &F) {
	if (F.denom != 1)
		out << F.num << "/" << F.denom;
	else
		out << F.num;
	return out;
}

//std::ostream& operator>>(std::ostream &in, const Fraction &F) {
//	cout << "\n  Enter the numerator : ";
//	in >> F.num;
//	cout << "\n  Enter the denominator : ";
//	in >> F.denom;
//	return in;
//}

#endif

