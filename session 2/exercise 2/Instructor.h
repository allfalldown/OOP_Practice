#include "Worker.h"

class Instructor:public Worker{
    private:
        int lesson;
        Worker baseInfo;
    public:
        Instructor(){
            lesson = 0;
        }
        int Salary(){
            return baseInfo.BasicSalary() + lesson * 45;
        }
        void InstructorInput(){
            baseInfo.GetInput();
            cout << "Lesson: "; cin >> this->lesson;
        }
        void InstructorDisplay(){
            baseInfo.BasicDisplay();
            cout << "Lesson: " << lesson << endl;
            cout << "-------" << endl; 
        }

};