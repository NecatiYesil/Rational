#include <iostream>

class Rational{
private:
    int numerator, denominator;
public:
    Rational(int _numerator, int _denominator);
    string print();
    string set(int _numerator, int _denominator);
}
