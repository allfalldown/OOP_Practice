#include "Member.h"

class NonMember: public Member{
    public:
        static int nNonMember;
        static int GetNumber(){
            return nNonMember;
        }
        NonMember(){
            type = "Non-member";
            baseFee = 200;
            classFee = steamFee = -1;
            ptSupport = 200;
        }

        void Input(){
            NonMember::nNonMember++;
            BaseInput();
        }

        void Display(){
            BaseDisplay();
        }
};

int NonMember::nNonMember = 0;
