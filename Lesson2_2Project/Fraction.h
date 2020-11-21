#pragma once
class Fraction
{
public:
	Fraction() : num(0), denom(1)
	{}
	void print() const;
	void setDenom(int denom);
	void setNum(int num);
	const int getNum() const;
	const int getDenom() const;
	void reduceFraction();
	// const int getLeastCommonMultiple() const;
	Fraction mult(const Fraction & two)const;
	Fraction plus(const Fraction& two)const;
	Fraction minus(const Fraction& two)const;
	Fraction divide(const Fraction& two)const;
	Fraction fractionPlusSimple(const int& simple_num) const;
	Fraction fractionMultSimple(const int& simple_num) const;
	bool isFractionEqual(const Fraction& two)const;
	Fraction(const int& denom);
	Fraction(const int& num,const int& denom);
	
private:
	int num, denom;
};

