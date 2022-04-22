#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book{
    private:
        string name, publishing_company;
        int size, page, year;
    public:
        string type;
        Book(){
            name = type =  publishing_company = "None";
            size = page = year = 0;
        }

        void BaseInput(){
            cout << "Name of this book: "; 
            cin.ignore();
            getline(cin, name);
            cout << "Publishing company: ";
            getline(cin, publishing_company);
            cout << "Size of this book: "; cin >> size;
            cout << "Number of pages: "; cin >> page;
            cout << "Year: "; cin >> year;
        }
        
        virtual void Input(){}

        void BaseDisplay(){
            cout << "Name of this book: " << name << endl;
            cout << "Size of this book: " <<  size << endl;
            cout << "Number of pages: " << page << endl;
            cout << "Publishing company: " << publishing_company << endl;
            cout << "Year of manufacture: " << year << endl;
        }

        virtual void Display(){};

        bool CompareName(string exname){
            return ((name == exname)?true:false);
        }
};