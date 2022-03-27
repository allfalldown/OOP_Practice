#include <iostream>
#include "Fraction.cpp"

using namespace std;

int main(){
    Fraction frac1 = Fraction();
    Fraction frac2 = Fraction();
    cout << "First: ";
    frac1.getinput();
    cout << "Second: ";
    frac2.getinput();
    cout << "All fraction: " << endl;
    frac1.display();
    frac2.display();
    frac1.sum(frac1, frac2);
    frac1.minus(frac1, frac2);
    frac1.multify(frac1, frac2);
    frac1.division(frac1, frac2);
    return 0;
}