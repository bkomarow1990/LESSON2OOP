#include <iostream>
#include "Fraction.h"
using namespace std;
void Fraction::print() const
{
	if (denom==0)
	{
		cout << "denom=0" << endl;
	}
	else {
	cout << num << "/" << denom << endl;
	}
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
const int Fraction::getNum() const
{
	return denom;
}
const int Fraction::getDenom() const
{
	return denom;
}

void Fraction::reduceFraction()
{
	for (int i = num; i > 1; i--)
	{
		if (num % i == 0 && denom % i == 0)
		{
			denom = denom / i;
			num = num / i;
		}
	}
}

/* const int Fraction::getLeastCommonMultiple() const
{
	if (denom==0)
	{

	}
} */

Fraction Fraction::mult(const Fraction& two) const
{
	Fraction result;
	result.num = this->num*two.num;
	result.denom = this->denom * two.denom;
	return result;
}

Fraction Fraction::plus(const Fraction& two) const
{
	Fraction result;
	if (this->getDenom() == two.getDenom())
	{
		result.setDenom(denom);
		result.setNum(num+two.num);
	}
	else {
		int nsk;
		int i = 0;
		if (this->getDenom()<two.getDenom())
		{
			i = this->getDenom();
		}
		else {
			i = two.getDenom();
		}
		nsk = i;
		while (true)
		{
			if (i % this->getDenom() == 0 && i % two.getDenom() ==0)
			{
				nsk = this->getDenom();
				break;
			}
			i++;
		}
		int help_fraction1, help_fraction2;
		help_fraction1 = nsk / this->getDenom();
		help_fraction2 = nsk / two.getDenom();
		Fraction temp_fraction1;
		Fraction temp_fraction2;
		temp_fraction1.setNum(num * help_fraction1);
		temp_fraction1.setDenom(denom * help_fraction1);
		temp_fraction2.setNum(two.num*help_fraction2);
		temp_fraction2.setDenom (two.denom * help_fraction2);
		result.setNum(temp_fraction1.num+temp_fraction2.num);
		result.setDenom(temp_fraction2.denom);
	}
	return result;
}
Fraction Fraction::fractionPlusSimple(const int& simple_num) const
{
	Fraction result;
	result.denom = denom;
	result.num = simple_num * denom + num;
	return result;
}
Fraction Fraction::fractionMultSimple(const int& simple_num) const
{
	Fraction result;
	Fraction temp_fraction;
	temp_fraction.setNum(num);
	temp_fraction.setDenom(1);
	result.setNum(simple_num * denom);
	result.setNum(result.num/temp_fraction.num);
	result.setDenom(denom);
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

