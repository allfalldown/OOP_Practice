#pragma once
#include <iostream>
#include <string>

using namespace std;

typedef struct DateOfBirth{
    int day, month, year;

    void getDate(){
        cout << "Day: "; cin >> day;
        cout << "Month: "; cin >> month;
        cout << "Year: "; cin >> year;
    }

    void displayDate(){
        cout << "Date of birth: " << day << "/" << month << "/" << year << endl;
    }
}Dob;

struct Score{
    double math, literature, english;

    void getScore(){
        cout << "Math: "; cin >> math;
        cout << "Literature: "; cin >> literature;
        cout << "English: "; cin >> english;
    }

    void displayScore(){
        cout << "Math: " << math << endl;
        cout << "Literature: " << literature << endl;
        cout << "English: " << english << endl;
    }
};

class Student{
    private:
        int id;
        string name;
        char gender;
        Dob date;
        Score point;
    public:
        Student();
        Student(int id, char name[], char gender, int day, int month, int year, double math, double literature, double english);
        Student(const Student& stu);

        void display();
        void getInputOne();   
        bool isHigherThan25();
        bool isGirlAndHigherThan28();
        bool isPass();
};