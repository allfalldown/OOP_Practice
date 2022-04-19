#pragma once
#include "Human.h"

class Pupil{
    private:
        Human baseInfo = Human();
        string _class_, phoneNumber, schoolName;
    public:
        Pupil(){
            _class_ = schoolName = phoneNumber = "None";
        }
        void pupilInput(){
            baseInfo.basicInput();
            cin.ignore();
            cout << "Class: "; getline(cin, this->_class_);
            cout << "Phone number: "; getline(cin, this->phoneNumber);
        }

        void pupilOutput(){
            baseInfo.basicInput();
            cout << "Class: " << _class_ << endl;
            cout << "Phone number: " << phoneNumber << endl;
        }
};