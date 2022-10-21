#include "Fraction.h"

Fraction::Fraction()
{
	num = 0;
	den = 0;
}

Fraction::Fraction(int n)
{	
	SetN(n);
}

Fraction::Fraction(int n, int d)
{
	Set(n, d);
}
Fraction::Fraction(Fraction const& src) 
{
	num = src.num;
	den = src.den;
}
int Fraction::GetDen()
{
	return den;
}

int Fraction::GetNum()
{
	return num;
}

void Fraction::Set(int n, int d)
{
	this->num = n;
	this->den = d;
}
void Fraction::SetN(int n) 
{
	this->num = n;
}

int Fraction::GreatestCommonFactor(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return GreatestCommonFactor(b, a % b);
}

int Fraction::LowestCommonDenominator(int a, int b)
{
	return a * b / GreatestCommonFactor(a, b);
}