#include "Member.h"

class Premium: public Member{
    public:
        static int nPremium;
        static int GetNumber(){
            return nPremium;
        }
        Premium(){
            type = "Premium" ;
            baseFee = 1000;
            classFee = steamFee = ptSupport = 0;
        }

        void Input(){
            Premium::nPremium++;
            BaseInput();
        }

        void Display(){
            BaseDisplay();
        }
};

int Premium::nPremium = 0;