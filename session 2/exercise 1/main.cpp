#include "Pupil.h"
#include "Student.h"
#include "Actor.h"
#include "Singer.h"
#include "Worker.h"

int main(){
    Student stu[100]; Actor act[100]; Pupil pup[100]; Singer sin[100]; Worker wor[100];
    int nstu, nact, npup, nsin, nwor, max, max_singer;
    nstu = nact = npup = nsin = nwor = max = max_singer = 0;
    int number; cout << "Number of people: "; cin >> number;
    for (int i=0; i<number; i++){
        cout << "1. Student" << endl << "2. Actor" << endl << "3. Pupil" << endl << "4. Singer" << endl << "5. Worker" << endl;
        int tmp;
        cout << "Type person: "; cin >> tmp;
        if (tmp == 1){
            nstu++;
            stu[nstu-1].studentInput();
            stu[nstu-1].studentOutput();
        }
        else if (tmp == 2){
            nact++;
            act[nact-1].actorInput();
            act[nact-1].actorOutput();
            if (act[nact-1].salary > max)
                max = act[nact-1].salary;
        }
        else if (tmp == 3){
            npup++;
            pup[npup-1].pupilInput();
            pup[npup-1].pupilOutput();
        }
        else if (tmp == 4){
            nsin++;
            sin[nsin-1].singerInput();
            sin[nsin-1].singerOutput();
            if (sin[nsin-1].salary > max)
                max = sin[nsin-1].salary;
            if (sin[nsin-1].salary > max_singer)
                max_singer = sin[nsin-1].salary;
        }
        else if (tmp == 5){
            nwor++;
            wor[nwor-1].workerInput();
            wor[nwor-1].workerOutput();
            if (wor[nwor-1].salary > max)
                max = wor[nwor-1].salary;
        }
    }
    cout << "Import: " << Human::GetCount();
    cout << "The highest salary is " << max << endl;
    cout << "The highest singer's salary is " << max_singer << endl;
    return 0;
}