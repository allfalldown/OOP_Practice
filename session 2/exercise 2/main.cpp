#include "Instructor.h"
#include "Officer.h"
#include "Worker.h"

int main(){
    Worker work;
    Instructor ins[100];
    Officer off[100];
    int nins, noff; nins = noff = 0;
    int number; cout << "Number of worker: "; cin >> number;
    for (int i=0; i<number; i++){
        int tmp;
        cout << "1. Instructor" << endl << "2. Officer" << endl;
        cout << "Type of worker: "; cin >> tmp;
        if (tmp == 1){
            nins++;
            ins[nins-1].InstructorInput();
        }
        else{
            noff++;
            off[noff-1].OfficerInput();
        }
    } 
    cout << "Imported: " << Worker::GetCount() << endl;
    work.Sort(ins, nins);
    work.Sort(off, noff);

    for (int i=0; i<nins; i++)
        ins[i].InstructorDisplay();
    for (int i=0; i<noff; i++)
        off[i].OfficerDisplay();
    return 0;
}