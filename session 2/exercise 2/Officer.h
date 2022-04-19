#include "Worker.h"

class Officer:public Worker{
    private:
        int workday;
        Worker baseInfo;
    public:
        Officer(){
            workday = 0;
        }
        int Salary(){
            return baseInfo.BasicSalary() + workday * 200;
        }
        void OfficerInput(){
            baseInfo.GetInput();
            cout << "Days at office: "; cin >> this->workday;
        }
        void OfficerDisplay(){    
            baseInfo.BasicDisplay();
            cout << "Days at office: " << workday << endl;
            cout << "-------" << endl; 
        }

};
