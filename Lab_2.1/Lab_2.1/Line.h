//////////////
// Line.h
//////////////

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Line
{
	double first;
	double second;
public:
	Line();
	Line(double, double);
	Line(const Line&);
	~Line();

	void SetFirst(double value);
	void SetSecond(double value) { second = value; };
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }

	Line& operator = (const Line&);
	operator string() const;

	friend Line operator + (const Line&, const Line&);
	friend Line operator - (const Line&, const Line&);
	friend Line operator * (const Line&, const Line&);
	friend Line operator / (const Line&, const Line&);
	friend Line operator ^ (const Line&, const unsigned);

	friend ostream& operator << (ostream&, const Line&);
	friend istream& operator >> (istream&, Line&);

	Line& operator ++();
	Line& operator --();
	Line operator ++(int);
	Line operator --(int);

	double root();
};

