#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    int a1,b1,a2,b2;
    /** Prompts to user to input ratio values **/
    cout << "Enter integer numerator of the first ratio: ";
    cin >> a1;
    cout << "Enter integer denominator of the first ratio: ";
    cin >> b1;
    cout << "Enter integer numerator of the second ratio: ";
    cin >> a2;
    cout << "Enter integer denominator of the second ratio: ";
    cin >> b2;
    Rational Rational1;
    Rational1.set(a1, b1);
    Rational Rational2;
    Rational2.set(a2,b2);
    Rational Rational3;
    Rational3 = Rational1.add(Rational2);
    cout << "Your new rational number is: ";// Prints the result
    Rational3.print();
    cout << endl;
return 0;
}
