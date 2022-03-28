#include "Student.h"

using namespace std;

Student::Student(){
    id = 0;
    name = " ";
    gender = 'N';
    date.day = date.month = date.year = 0;
    point.math = point.literature = point.english = 0;
}

Student::Student(int Id, char name[], char gender, int day, int month, int year, double math, double literature, double english){
    Id = Id;
    name = name;
    gender = gender;
    date.day = day;
    date.month = month;
    date.year = year;
    point.math = math;
    point.literature = literature;
    point.english = english;
}

Student::Student(const Student& stu){
    this->id = stu.id;
    this->name = stu.name;
    this->gender = stu.gender;
    this->date.day = stu.date.day;
    this->date.month = stu.date.month;
    this->date.year = stu.date.year;
    this->point.math = stu.point.math;
    this->point.literature = stu.point.literature;
    this->point.math = stu.point.math;
}

void Student::getInputOne(){
    cout << "Information of one student: " << endl;
    cout << "Student ID: "; cin >> id;
    cout << "Student name: "; 
    cin.ignore();
    getline(cin,name);
    cout << "Student gender: "; cin >> gender;
    cout << "Date of birth: " << endl; date.getDate();
    cout << "Student report: " << endl; point.getScore();
}

void Student::display(){
    cout << "== Details of student ==" << endl;
    cout << "Student ID: "; cout << id << endl;
    cout << "Student name: "; cout << name << endl;
    cout << "Student gender: "; cout << gender << endl;
    date.displayDate();
    point.displayScore();
    cout << endl;
}

bool Student::isHigherThan25(){
    float total = point.math + point.math + point.literature + point.english;
    return (total>=25)?true:false;
}

bool Student::isGirlAndHigherThan28(){
    float total = point.math + point.math + point.literature + point.english;
    return (total >= 28 && (gender == 'F' || gender == 'f'))?true:false;
}

bool Student::isPass(){
    float total = point.math + point.math + point.literature + point.english;
    return (total >= 18 && point.math >=3 && point.literature >=3 && point.english >=3)?true:false;
}