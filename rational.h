#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>

class Rational{
private:
    int numerator, denominator;
public:
    void set(int _numerator, int _denominator);
    Rational add(Rational R2); 
};



void Rational::set(int _numerator, int _denominator)
{
    numerator = _numerator;
    denominator = _denominator;
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


int main()
{
    Rational Rational1;
    Rational1.set(3, 5);
    Rational Rational2;
    Rational2.set(2,6);
    Rational Rational3 = Rational1.add(Rational2);

}

#endif
