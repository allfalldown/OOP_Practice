#include "Human.h"

class Singer{
    private:
        Human baseInfo = Human();
        string musicGene;
        int jobAge, typeSinger, perform, disc, show;
    public:
        int salary; 
        Singer(){
            musicGene = "None";
            salary = jobAge = typeSinger = perform = disc = show = 0;
        }

        void salaryModify(int &salary, int typeSinger, int jobAge, int perform, int disc, int show){
            if (typeSinger == 0)
                salary = 3000000 + 500000*jobAge + 1000*disc + 200000*perform;
            else
                salary = 5000000 + 500000*jobAge + 1200*disc + 500000*perform + 500000*show;
        }

        void singerInput(){
            baseInfo.basicInput();
            cout << "Age of job: "; cin >> jobAge;
            cout << "Type of singer: "; cin >> typeSinger;
            cout << "Number of perform: "; cin >> perform;
            cout << "Number of disc: "; cin >> disc;
            show = 0;
            if (typeSinger == 0)
                cout << "Number of gameshow: "; cin >> show;
            salaryModify(salary, typeSinger, jobAge, perform, disc, show);
        }

        void singerOutput(){
            baseInfo.basicOutput();
            cout << "Age of job: " << jobAge << endl;
            cout << "Type of singer: " << typeSinger << endl;
            cout << "Number of perform: " << perform << endl;
            cout << "Number of disc: " << disc << endl;
            if (typeSinger == 0)
                cout << "Number of gameshow: " << show << endl;
            cout << "Salary: " << salary << endl;
        }

};