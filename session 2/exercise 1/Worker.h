#include "Human.h"

class Worker{
    private:
        Human baseInfo = Human();
        string workAddress;
    public:
        int salary;
        Worker(){
            salary = 0;
            workAddress = "None";
        }

        void workerInput(){
            baseInfo.basicInput();
            cout << "Salary: "; cin >> this->salary;
            cin.ignore();
            cout << "Address of workplace: "; getline(cin, this->workAddress);
        }

        void workerOutput(){
            baseInfo.basicOutput();
            cout << "Salary: " << salary << endl;
            cout << "Address of workplace: " << workAddress << endl;
        }
};