#pragma once
#include "Pupil.h"

class Student{
    private:
        Pupil baseInfo = Pupil();
        string foculty, studentID ;
    public:
        Student(){
            foculty = studentID = "None";
        }
        void studentInput(){
            cin.ignore();
            cout << "Student ID: "; getline(cin, this->studentID);
            baseInfo.pupilInput();        
        }

        void studentOutput(){
            cout << "ID: " << studentID << endl;
            baseInfo.pupilOutput();
        }
};

