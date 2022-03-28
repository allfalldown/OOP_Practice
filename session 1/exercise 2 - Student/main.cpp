#include "Student.cpp"

int main(){
    Student list[10000]; int number, check = 0;
    //gahter all student's info 
    cout << "Number of student: "; cin >> number;
    for (int i=0; i<number; i++)
        list[i].getInputOne();
    
    cout << endl << "=========o0o=========" << endl;
    //display all
    cout << "Information of all students " << endl;
    for (int i=0; i<number; i++)
        list[i].display();

    cout << endl << "=========o0o=========" << endl;
    //display students being higher than 25
    cout << "Information of students being higher than 25" << endl;
    for (int i=0; i<number; i++)
        if (list[i].isHigherThan25()){
            list[i].display();
            check = 1;
        }
    if (check == 0)
        cout << "None of all" << endl;

    cout << endl << "=========o0o=========" << endl;
    //display female students being higher than 28
    check = 0;
    cout << "Information of female students being higher than 28" << endl;
    for (int i=0; i<number; i++)
        if (list[i].isGirlAndHigherThan28()){
            list[i].display();
            check = 1;
        }
    if (check == 0)
        cout << "None of all" << endl;       
    
    cout << endl << "=========o0o=========" << endl;
    //display students being higher than 28
    check = 0;
    cout << "Information of female students being passed exam" << endl;
    for (int i=0; i<number; i++)
        if (list[i].isPass()){
            list[i].display();
            check = 1;
        }
    if (check == 0)
        cout << "None of all" << endl;        

    return 0;
}