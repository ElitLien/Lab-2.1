//////////////
// Source.cpp
//////////////

#include <iostream>
#include "Line.h"

using namespace std;

Line  makeLine(double a, double b)
{
	Line t(a, b);

	return t;
}

int main()
{
	Line a(1, 2);
	Line b(3, 4);

	cout << " a++ " << a++ << endl;
	cout << " a   " << a << endl;
	cout << " ++a " << ++a << endl;
	cout << " a   " << a << endl;

	Line q;
	cin >> q;
	cout << "q = " << q << endl;

	Line y; y = a * q + b;
	cout << "y = " << endl;
	cout << y;

	Line t = makeLine(6, 1);
	cout << "t = " << endl;
	cout << t << endl;

	cout << "RootA : " << a.root() << endl;
	cout << "RootB : " << b.root() << endl;
	cout << "RootT : " << t.root() << endl;

	return 0;
}