#include "Human.h"

class Actor{
    private:
        Human baseInfo = Human();
        int jobAge;
    public:  
        int salary;
        Actor(){
            salary = jobAge = 0;
        }

        void actorInput(){
            baseInfo.basicInput();
            cout << "Salary: "; cin >> this->salary;
            cout << "Age of job: "; cin >> this->jobAge;
        }

        void actorOutput(){
            baseInfo.basicOutput();
            cout << "Salary: " << salary << endl;
            cout << "Age of job: " << jobAge << endl;
        }
};