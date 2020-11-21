#include <iostream>
#include <string>
#include "Fraction.h"
using namespace std;
int main() {
	Fraction one;
	one.setNum(1);
	one.setDenom(3);
	one.print();
	Fraction two;
	two.setNum(1);
	two.setDenom(6);
	two.print();
	cout << "==================PLUS==================" << endl;
	one.print();
	cout << "+"<<endl;
	two.print();
	cout << "=" << endl;
	one.plus(two).print();
	cout << "==================MINUS==================" << endl;
	one.minus(two).print();
	cout << "==================DIVIDE==================" << endl;
	one.divide(two).print();
	cout << "==================FRACTION_PLUS_SIMPLE==================" << endl;
	one.fractionPlusSimple(2).print();
	cout << "==================FRACTION_MULT_SIMPLE==================" << endl;
	Fraction one_ms;
	one_ms.setNum(1);
	one_ms.setDenom(2);
	one_ms.fractionMultSimple(2).print();
	cout << "==================FRACTIONS_IS_EQUAL==================" << endl;
	Fraction oneIsEq(1,2);
	Fraction twoIsEq(2, 4);
	cout << oneIsEq.isFractionEqual(twoIsEq) << endl;
	return 0;
}