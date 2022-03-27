#include "Time.cpp"

using namespace std;

int main(){
    Time time[100]; int n;
    cout << "Number of time: "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "Record " << i+1 << ": " << endl;
        time[i] = Time();
        time[i].checkTime();
    }

    cout << endl << "===== Time records =====" << endl;
    for (int i=0; i<n; i++){
        cout << "Record " << i+1 << ": " << endl;
        time[i].display();
    }

    cout << endl << "===== Leap year =====" << endl;
    int check = 0;
    for (int i=0; i<n; i++){
        if (time[i].isLeap()){
             cout << "Record " << i+1 << ": ";
             time[i].displayLeap();
             check++;
        }
    }
    if (check == 0)
        cout << "None of all" << endl;

    cout << endl << "===== Update time =====" << endl;
    int extra;
    cout << "Add seconds into: "; cin >> extra;
    cout << endl;
    for (int i=0; i<n; i++){
        time[i].updateTime(extra);
        cout << "Record " << i+1 << ": " << endl;
        time[i].display();
    }
        
    return 0;
}