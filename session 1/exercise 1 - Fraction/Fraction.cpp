#include "Fraction.h"

using namespace std;

Fraction::Fraction(){
    numerator = denominator = 1;
}

Fraction::Fraction(int num, int den){
    numerator = num;
    denominator = den;
}

Fraction::Fraction(const Fraction& frac){
    this->numerator = frac.numerator;
    this->denominator = frac.denominator;
}

void Fraction::display(){
    cout << numerator << "/" << denominator << endl;
}

void Fraction::getinput(){
    cin >> numerator >> denominator;
}

int Fraction::gcd(int num, int den){
    if (num == 0 || den == 0)
        return num + den;

    while (num != den){
        if (num > den)
            num -= den; 
        else
            den -= num;
    }
    return num; 
}

void Fraction::optimize(int num, int den){
    if (num < 0 && den < 0){
        num = -num;
        den = -den;
    }
    if (den < 0){
        den = (den<0)?-den:den;
        num = -num;
    }
    if (num % den == 0)
        cout << num/den << endl;
    else if  (den % num == 0){
        if (num > 0)
            cout << 1 << "/" << den/num << endl;
        else if (num < 0)
            cout << -1 << "/" << den/num << endl;
    }
    else if (num == 0)
        cout << 0 << endl;
    else if (den == 0)
        cout << "No fraction exsists" << endl;
    else{
        int temp = gcd(num, den);
        num /= temp; den /= temp;
        cout << num << "/" << den << endl;
    }
}

void Fraction::sum(Fraction frac1, Fraction frac2){
    cout << "Sum of 2 fraction: ";
    optimize(frac1.numerator*frac2.denominator + frac2.numerator*frac1.denominator, frac1.denominator*frac2.denominator);
}

void Fraction::minus(Fraction frac1, Fraction frac2){
    cout << "Minus of 2 fraction: ";
    optimize(frac1.numerator*frac2.denominator - frac2.numerator*frac1.denominator, frac1.denominator*frac2.denominator);
}

void Fraction::multify(Fraction frac1, Fraction frac2){
    cout << "Multify of 2 fraction: ";
    optimize(frac1.numerator*frac2.numerator, frac1.denominator*frac2.denominator);
}

void Fraction::division(Fraction frac1, Fraction frac2){
    cout << "Division of 2 fraction: ";
    optimize(frac1.numerator*frac2.denominator, frac1.denominator*frac2.numerator);
}