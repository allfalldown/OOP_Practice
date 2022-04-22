#include "Basic.h"
#include "Premium.h"
#include "NonMember.h"

int main(){
    Member *mem[100];
    Basic bas[100];
    Premium pre[100];
    NonMember nmem[100];

    cout << "== Import data of customers ==" << endl;
    int n; cout << "Number of customers: "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "1. Basic member" << endl << "2. Premium member" << endl << "3. Non-member" << endl;
        int sw; cin >> sw;
        if (sw == 1){
            mem[i] = &bas[i];
        }else if (sw == 2){
            mem[i] = &pre[i];
        }else if (sw == 3){
            mem[i] = &nmem[i];
        }
        mem[i]->Input();
    }

    cout << "== Imported data ==" << endl;
    cout << "Number of basic members: " << Basic::nBasic << endl;
    cout << "Number of premium members: " << Premium::nPremium << endl;
    cout << "Number of non-members: " << NonMember::nNonMember << endl;
    
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << endl;
        mem[i]->Display();
    }

    cout << "== The highest payment ==" << endl;
    mem[0]->Sort(*mem, n);
    for (int i=0; i<3; i++){
        cout << i+1 << ". " << endl;
        mem[i]->Display();
        cout << "Recommended type: " << mem[i]->type << endl;
    }
    return 0;
}