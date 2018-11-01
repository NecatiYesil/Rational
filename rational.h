#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
#include <string>
class Rational{
private:
    int numerator, denominator;
public:
    Rational();
    void set(int _numerator, int _denominator);
    Rational add(Rational R2); 
    void print();
};
// Initilize the variables
Rational::Rational()
{
    numerator = 1;
    denominator = 1;
}
// It prevent to denominator to be zero
void Rational::set(int _numerator, int _denominator)
{
    if(_denominator != 0)
    {
    numerator = _numerator;
    denominator = _denominator;
    }
}
// Adds the ratios together 
Rational Rational::add(Rational R2)
{
    int N3, D3;
    N3 = (numerator*R2.denominator) + (R2.numerator*denominator);
    D3 = denominator * R2.denominator;
    Rational new_rational;
    new_rational.set( N3, D3);
    return new_rational;
}

void Rational::print()
{
   std::cout <<  numerator << "/" << denominator;
}

#endif
