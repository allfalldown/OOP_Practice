#include "Member.h"

class Basic: public Member{
    private:
        int nClass;
    public:
        static int nBasic;
        static int GetNumBer(){
            return nBasic;
        }
        Basic(){
            type = "Basic";
            baseFee = 500;
            classFee = ptSupport = 100;
            nClass = 0;
            steamFee = -1;
        }

        void Input(){
            Basic::nBasic++;
            BaseInput();
            cout << "Number of class: "; cin >> nClass;
            classFee = nClass * classFee;
        }

        void Display(){
            BaseDisplay();
            cout << "Registered class: " << nClass << endl;
        }

};

int Basic::nBasic = 0;