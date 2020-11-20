#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;
int main() {
	Fraction one;
	one.setNum(3);
	one.setDenom(5);
	one.print();
	Fraction two;
	two.setNum(5);
	two.setDenom(7);
	two.print();
	cout << "==================PLUS==================" << endl;
	one.print();
	cout << "+"<<endl;
	two.print();
	cout << "=" << endl;
	one.plus(two).print();
	cout << "==================FRACTION_PLUS_SIMPLE==================" << endl;
	one.fractionPlusSimple(2).print();
	cout << "==================FRACTION_MULT_SIMPLE==================" << endl;
	Fraction one_ms;
	one_ms.setNum(1);
	one_ms.setDenom(2);
	one_ms.fractionMultSimple(2).print();
	return 0;
}