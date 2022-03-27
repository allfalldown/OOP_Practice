#include "Time.h"

using namespace std;

Time::Time(){
    day =  month = year = 0;
    hour = minute = second = 0;
}

Time::Time(int day, int month, int year, int hour, int second){
    day = day;
    month = month;
    year = year;
    hour = hour;
    second = second;
}

Time::Time(const Time& time){
    this->day = time.day;
    this->month = time.month;
    this->year = time.year;
    this->hour = time.hour;
    this->minute = time.minute;
    this->second = time.second;
}

void Time::getTime(){
    cout << "Day: "; cin >> day;
    cout << "Month: "; cin >> month;
    cout << "Year: "; cin >> year;
    cout << "Hour: "; cin >> hour;
    cout << "Minute: "; cin >> minute;
    cout << "Second: "; cin >> second;
}

void Time::display(){
    cout << "Date: " << day << "/" << month << "/" << year << endl;
    cout << "Detail: " << hour << ":" << minute << ":" << second << endl;
}

void Time::checkTime(){
    bool check = false;
    while (check == false){
        getTime();
        if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59 && second >= 0 && second <=59)
            check = true;
        if (check == false)
            cout << "Invalid value, please retype " << endl;
    }
}

bool Time::isLeap(){
    return (year % 4 == 0)?true:false;
}

void Time::displayLeap(){
    cout << year << " is leap year" << endl;
}

void Time::updateTime(int extra){
    second+= extra; int temp = 0;
    if (second >= 60){
        temp = second - 59;
        second = 0;
        minute+= temp;
        if (minute >= 60){
            temp = minute - 59;
            minute = 0;
            hour+= temp;
            if (hour >= 24){
                hour = 0;
            }
        }
    }
}