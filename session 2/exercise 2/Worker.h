#pragma once
#include <iostream>
#include <string>

using namespace std;

class Worker{
    private:
        string name, department, level;
        int allowance, coefficients_salary;
    public:
        static int count;
        Worker(){
            name = department = level = "None";
            allowance = coefficients_salary = 0;
        }
        static int GetCount(){
            return count;
        }
        void GetInput(){
            Worker::count++;
            cout << "Name: ";
            cin.ignore(); getline(cin, this->name);
            cout << "Department: ";
            getline(cin, this->department); 
            cout << "Level: "; getline(cin, this->level);
            cout << "Allowance: "; cin >> this->allowance;
        }
        int BasicSalary(){
            return coefficients_salary * 730 + allowance;
        }
        void Swap(Worker &x, Worker &y){
            Worker tmp = x;
            x = y;
            y = tmp;
        }
        void Sort(Worker *wor, int number){
            for (int i=0; i<number-1; i++)
                for (int j=i+1; j<number; j++){
                    if (wor[i].allowance > wor[j].allowance)
                        Swap(wor[i],wor[j]);
                    else if (wor[i].allowance == wor[i].allowance)
                        if (wor[i].level > wor[i].level)
                           Swap(wor[i],wor[j]); 
                }
        }
        void BasicDisplay(){
            cout << "Name: " << name << endl;
            cout << "Department: " << department << endl;
            cout << "Allowance: " << allowance << endl;
            cout << "Level: " << level << endl;
        }
};

int Worker::count = 0;