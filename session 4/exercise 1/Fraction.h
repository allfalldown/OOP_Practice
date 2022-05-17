#pragma once
#include <iostream>

using namespace std;

class Fraction{
    private:
        int numerator, denominator;
    public:
        Fraction(){
            numerator = 0;
            denominator = 1;
        }
        ~Fraction(){}

        int GreatestCommonDivisor(int number1, int number2){
            if (number1 == 0)
                return number2;
            if (number2 == 0)
                return number1;
            if (number1 == number2)
                return number1;
            if (number1 > number2)
                return GreatestCommonDivisor(number1-number2, number2);
            return GreatestCommonDivisor(number1, number2-number1);
        }

        void Optimize(){
            if (numerator % denominator == 0){
                numerator %= denominator;
                denominator = 1;
            }
            else if (denominator % numerator == 0){
                denominator %= numerator;
                numerator = 1;
            }
            else{
                int tmp = GreatestCommonDivisor(numerator, denominator);
                numerator /= tmp;
                denominator /= tmp;
            }
        }   

        friend istream& operator>>(istream& is, Fraction &frac){
            cout << "Numerator of fraction: "; cin >> frac.numerator;
            cout << "Denominator of fraction: "; cin >> frac.denominator;
            frac.Optimize();
            return is;
        }

        friend ostream& operator<<(ostream& os, Fraction &frac){
            if (frac.denominator == 0)
                cout << "Invalid fraction" << endl;
            else{
                cout << "Fraction: ";
                if (frac.numerator == 0)
                    cout << 0;
                else if (frac.denominator == 1)
                    cout << frac.numerator << endl;
                else if (frac.numerator == 1)
                    cout << 1 << "/" << frac.denominator << endl;
                else    
                    cout << frac.numerator << "/" << frac.denominator << endl;
            } 
            
            return os;
        }

        Fraction operator + (Fraction frac){
            int tmp1 = numerator*frac.denominator + denominator*frac.numerator;
            int tmp2 = denominator*frac.denominator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }
        
        Fraction operator - (Fraction frac){
            int tmp1 = numerator*frac.denominator - denominator*frac.numerator;
            int tmp2 = denominator*frac.denominator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        Fraction operator * (Fraction frac){
            int tmp1 = numerator*frac.numerator;
            int tmp2 = denominator*frac.denominator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        Fraction operator / (Fraction frac){
            int tmp1 = numerator*frac.denominator;
            int tmp2 = denominator*frac.numerator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        Fraction operator += (Fraction frac){
            int tmp1 = numerator*frac.denominator + denominator*frac.numerator;
            int tmp2 = denominator*frac.denominator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        Fraction operator -= (Fraction frac){
            int tmp1 = numerator*frac.denominator - denominator*frac.numerator;
            int tmp2 = denominator*frac.denominator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        Fraction operator *= (Fraction frac){
            int tmp1 = numerator*frac.numerator;
            int tmp2 = denominator*frac.denominator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        Fraction operator /= (Fraction frac){
            int tmp1 = numerator*frac.denominator;
            int tmp2 = denominator*frac.numerator;
            numerator = tmp1;
            denominator = tmp2;
            Optimize();
            return *this;
        }

        ////

        Fraction operator += (int k){
            numerator += k;
            denominator += k;
            Optimize();
            return *this;
        }

        Fraction operator -= (int k){
            numerator -= k;
            denominator -= k;
            Optimize();
            return *this;
        }

        bool operator == (Fraction frac){
            if (numerator == frac.numerator && denominator == frac.denominator)
                return true;
            return false;
        }

        bool operator != (Fraction frac){
            if (numerator != frac.numerator || denominator != frac.denominator)
                return true;
            return false;
        }

        bool operator > (Fraction frac){
            if ((numerator*frac.denominator) > (denominator*frac.numerator))
                return true;
            return false;
        }

        bool operator < (Fraction frac){
            if ((numerator*frac.denominator) < (denominator*frac.numerator))
                return true;
            return false;
        }

        bool operator >= (Fraction frac){
            if (numerator == frac.numerator && denominator == frac.denominator)
                return true;
            if ((numerator*frac.denominator) > (denominator*frac.numerator))
                return true;
            return false;
        }

        bool operator <= (Fraction frac){
            if (numerator == frac.numerator && denominator == frac.denominator)
                return true;
            if ((numerator*frac.denominator) < (denominator*frac.numerator))
                return true;
            return false;
        }

        //postfix ++
        Fraction operator ++ (int){
            Fraction tmp = *this;
            ++this->numerator;
            ++this->denominator;
            return tmp;
        }

        //prefix ++
        Fraction& operator ++ (){
            numerator++;
            denominator++;
            Optimize();
            return *this;
        }

        //postfix --
        Fraction operator -- (int){
            Fraction tmp = *this;
            --this->numerator;
            --this->denominator;
            return tmp;
        }

        //prefix --
        Fraction& operator -- (){
            numerator--;
            denominator--;
            Optimize();
            return *this;
        }

        friend Fraction operator ~ (Fraction &frac){
            int tmp =frac.numerator;
            frac.numerator = frac.denominator;
            frac.denominator = tmp;
            frac.Optimize();
            return frac;
        }
        
};