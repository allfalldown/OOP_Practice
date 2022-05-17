#include "Fraction.h"

int main(){
    Fraction frac1, frac2, exfrac1, exfrac2, sum, sub, mul, div;
    cout << "Fraction 1: " << endl; cin >> frac1;
    cout << "Fraction 2: " << endl; cin >> frac2;
    cout << "== Detail ==" << endl;
    cout << "Fraction 1: " << frac1 << endl;
    cout << "Fraction 2: " << frac2 << endl;
    cout << "== Math ==" << endl;
    sum = frac1 + frac2;
    cout << "Sum of 2 fraction: " << sum << endl;
    sub = frac1 - frac2;
    cout << "Minus of 2 fraction: " << sub << endl;
    mul = frac1 * frac2;
    cout << "Multify of 2 fraction: " << mul << endl;
    div = frac1 / frac2;
    cout << "Division of 2 fraction: " << div << endl;
    //////
    frac1+=frac2;
    cout << "Fraction1 += Fraction2: " << frac1;
    frac1-=frac2;
    cout << "Fraction1 -= Fraction2: " << frac1;
    frac1*=frac2;
    cout << "Fraction1 *= Fraction2: " << frac1;
    frac1/=frac2;
    cout << "Fraction1 /= Fraction2: " << frac1;
    //////
    int k; cout << "Coefficient k:"; cin >> k;
    frac1+=k;
    cout << "Fraction1 += " << k << ": " << frac1;
    frac1-=k;
    cout << "Fraction1 -= " << k << ": " << frac1;
    
    if (frac1 == frac2)
        cout << "Fraction 1 and 2 are equal" << endl;
    if (frac1 != frac2)
        cout << "Fraction 1 and 2 are not equal" << endl;
    if (frac1 >= frac2)
        cout << "Fraction 1 and 2 are greater or equal" << endl;
    if (frac1 <= frac2)
        cout << "Fraction 1 and 2 are less or equal" << endl;

    frac1++; cout << "After prefix ++ fraction 1: " << frac1 << endl;
    ++frac1; cout << "After postfix ++ fraction 1: " << frac1 << endl;
    frac2++; cout << "After prefix ++ fraction 2: " << frac2 << endl;
    ++frac2; cout << "After postfix ++ fraction 2: " << frac2 << endl;

    frac1--; cout << "After prefix -- fraction 1: " << frac1 << endl;
    --frac1; cout << "After postfix -- fraction 1: " << frac1 << endl;
    frac2--; cout << "After prefix -- fraction 2: " << frac2 << endl;
    --frac2; cout << "After postfix -- fraction 2: " << frac2 << endl;

    ~frac1; ~frac2;
    cout << "After swap fraction 1: " << frac1 << endl;
    cout << "After swap fraction 2: " << frac2 << endl;
    return 0;
}