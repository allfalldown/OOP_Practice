#include "Book.h"

class Magazine: public Book{
    private:
        string author;
    public:
        static int nMagazine;
        static int GetNumber(){
            return nMagazine;
        }
        Magazine(){
            author = "None";
            type = "Magazine";
        }

        void Input(){
            Magazine::nMagazine++;
            BaseInput();
            cout << "Author: ";
            cin.ignore(); getline(cin, author);
        }

        void Display(){
            BaseDisplay();
            cout << "Author: " << author << endl;
        }

};

int Magazine::nMagazine = 0;