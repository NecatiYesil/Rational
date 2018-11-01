#include <iostream>
#include <string>
class Rational{
private:
    int numerator, denominator;
public:
    Rational();
    void set(int _numerator, int _denominator);
    Rational add(Rational R2); 
    std::string print();
};

Rational::Rational()
{
    numerator = 1;
    denominator = 1;
}

void Rational::set(int _numerator, int _denominator)
{
    if(_denominator != 0)
    {
    numerator = _numerator;
    denominator = _denominator;
    }
}

Rational Rational::add(Rational R2)
{
    int N3, D3;
    N3 = (numerator*R2.denominator) + (R2.numerator*denominator);
    D3 = denominator * R2.denominator;
    Rational new_rational;
    new_rational.set( N3, D3);
    return new_rational;
}

std::string Rational::print()
{
   return numerator + "/" + denominator;
}

