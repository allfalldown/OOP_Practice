#include "Book.h"

class Novel: public Book{
    private:
        string practice, translator, author;
    public:
        static int nNovel;
        static int GetNumber(){
            return nNovel;
        }

        Novel(){
            type = "Novel";
            practice = translator = author = "None";
        }

        void Input(){
            Novel::nNovel++;
            BaseInput();
            cout << "Drill book: ";
            cin.ignore();
            getline(cin, practice);
            cout << "Name of translator: ";
            getline(cin, translator);
            cout << "Name of author: ";
            getline(cin, author);
        }

        void Display(){
            BaseDisplay();
            cout << "Name of translator: " << translator << endl;
            cout << "Name of author: " << author << endl;
        }
};

int Novel::nNovel = 0;


