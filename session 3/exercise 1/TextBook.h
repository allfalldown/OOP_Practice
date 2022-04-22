#include "Book.h"

class TextBook: public Book{
    private:
        string practice;
        int republish;
    public:
        static int nTextBook;
        static int GetNumber(){
            return nTextBook;
        }

        TextBook(){
            type = "Text Book";
            practice = "None";
            republish = 0;
        }

        void Input(){
            TextBook::nTextBook++;
            BaseInput();
            cout << "Drill book: ";
            cin.ignore();
            getline(cin, practice);
            cout << "Republish times: "; cin >> republish;
        }

        void Display(){
            BaseDisplay();
            cout << "Drill book: " << practice << endl;
            cout << "Republish times: " << republish << endl;
        }
};

int TextBook::nTextBook = 0;