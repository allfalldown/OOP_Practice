#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct BirthDate{
    int day, month, year;
    BirthDate(){
        day = month = year = 0;
    }

    void dateInput(){
        cout << "Type day: "; cin >> this->day;
        cout << "Type month: "; cin >> this->month;
        cout << "Type year: "; cin >> this->year;
    }

    void dateOutput(){
        cout << "Date of birth: " << day << "/" << month << "/" << year << endl;
    }
};

class Human{
    private:
        string name, homeTown;
        BirthDate date;
    public:
        static int count;
        static int GetCount(){
		    return count;
	    }
        Human(){
            name = homeTown = "None";
        }

        void basicInput(){
            Human::count++;
            cin.ignore();
            cout << "Type name: "; getline(cin, this->name);
            cout << "Type homeTown: "; getline(cin, this->homeTown);
            cout << "Type date of birth: "; date.dateInput();
        }
        
        void basicOutput(){
            cout << "Name: " << name << endl;
            cout << "Home town: " << homeTown << endl;
            date.dateOutput();
        }
};

int Human::count = 0;