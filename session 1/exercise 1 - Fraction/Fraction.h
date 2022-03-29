#pragma once

class Fraction{
    private:
        int numerator, denominator;
    public:
        Fraction();
        Fraction(int num, int den);
        Fraction(const Fraction& frac);

        void display();
        void getinput();   
        int gcd(int num, int den);
        void optimize(int num, int den);
        void sum(Fraction frac1, Fraction frac2);
        void minus(Fraction frac1, Fraction frac2);
        void multify(Fraction frac1, Fraction frac2);
        void division(Fraction frac1, Fraction frac2);
        bool compare(Fraction frac1, Fraction frac2);
        void swap(Fraction &frac1, Fraction &frac2);
        void sort(Fraction *list, int number);
};

void sort(Fraction *list, int number);