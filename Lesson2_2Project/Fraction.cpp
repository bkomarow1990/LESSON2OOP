#include <iostream>
#include "Fraction.h"
using namespace std;
void Fraction::print() const
{
	cout << num << "/" << denom << "=" << num / denom << endl;
}

void Fraction::setDenom(int denom)
{
	if (denom==0)
	{
		denom = 1;
	}
	if (denom < 0)
	{
		num = -num;
		denom = -denom;
	}
	this->denom = denom;
}

void Fraction::setNum(int num)
{
	this->num = num;
}

const int Fraction::getDenom() const
{
	return denom;
}

Fraction Fraction::mult(const Fraction& two)
{
	Fraction result;
	result.num = this->num*two.num;
	result.denom = this->denom * two.denom;
	return result;
}

Fraction::Fraction(const int& denom)
	:Fraction()
{
}

Fraction::Fraction(const int& num, const int& denom)
{
	setDenom(denom);
}

