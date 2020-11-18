#pragma once
class Fraction
{
public:
	Fraction() : num(0), denom(1)
	{}
	void print() const;
	void setDenom(int denom);
	void setNum(int num);
	const int getDenom() const;
	Fraction mult(const Fraction & two);
private:
	int num, denom;
};

