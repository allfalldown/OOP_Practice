#include "TextBook.h"
#include "Novel.h"
#include "Magazine.h"

int main(){
    Book *bok[100];
    TextBook tbok[100];
    Novel nov[100];
    Magazine mag[100];
    cout << "== Import books ==" << endl;
    int n; cout << "Number of books: "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "1. Textbook" << endl << "2. Novel" << endl << "3. Magazine" << endl;
        int sw; cin >> sw;
        if (sw == 1)
            bok[i] = &tbok[i];
        else if (sw == 2)
            bok[i] = &nov[i];
        else if (sw == 3)
            bok[i] = &mag[i];
        bok[i]->Input();
}
    cout << "== Number of imported books ==" << endl;
    cout << "Textbook: " << TextBook::GetNumber() << endl;
    cout << "Novel: " << Novel::GetNumber() << endl;
    cout << "Magazine: " << Magazine::GetNumber() << endl;

    cout << "== Details of all books ==" << endl;
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << endl;
        bok[i]->Display();
    }

    cout << "== Find book ==" << endl;
    string exname; cout << "Name of book you want to find: "; cin.ignore();
    getline(cin, exname); 
    int check = 0;
    for (int i=0; i<n; i++){
        if (bok[i]->CompareName(exname)){
            cout << check+1 << ". " << endl;
            cout << "Type of book: " << bok[i]->type << endl;
            bok[i]->Display();
            check++;
        }
    }
    if (check == 0) cout << "No data" << endl;
    return 0;
}