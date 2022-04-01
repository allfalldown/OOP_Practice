#include <iostream>
#include "Fraction.cpp"

using namespace std;

int main(){
    int number, count = 0, temp_numerator, temp_denominator;
    Fraction frac1 = Fraction();
    Fraction frac2 = Fraction();
    Fraction list[100000];
    cout << "First fraction: ";
    frac1.getinput();
    cout << "Second fraction: ";
    frac2.getinput();
    cout << "All fraction: " << endl;
    frac1.display();
    frac2.display();
    frac1.sum(frac1, frac2);
    frac1.minus(frac1, frac2);
    frac1.multify(frac1, frac2);
    frac1.division(frac1, frac2);
    cout << "===============" << endl;
    cout << "Number of fractions: "; cin >> number;
    while (count < number){
        cout << "Fraction: "; cin >> temp_numerator >> temp_denominator;
        if (temp_denominator == 0)
            cout << "Invalid fraction" << endl;
        else{
            list[count] = Fraction(temp_numerator,  temp_denominator);
            count++;
        }
    }
    
    sort(list,number);
    cout << "After sorting all fraction: " << endl;
    for (int i=0; i<number; i++){
        list[i].display();
    }
    return 0;
}
