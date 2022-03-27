#pragma once
#include <iostream>

class Time{
    private:
        int day, month, year;
        int hour, minute, second;
    public:
        Time();
        Time(int day, int month, int year, int hour, int second);
        Time(const Time& time);

        void getTime();
        void display();
        void checkTime();
        bool isLeap();
        void displayLeap();
        void updateTime(int extra);
};