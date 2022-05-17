#include "Matrix.h"

int main(){
    Matrix mat1, mat2, sum, sub, mul, div;
    cout << "== Matrix 1 ==" << endl;
    cin >> mat1; cout << mat1 << endl;
    cout << "== Matrix 2 ==" << endl;
    cin >> mat2; cout << mat2;
    
    cout << "== Math for matrix ==" << endl;

    if (mat1.IsSameLevel(mat2)){
        sum = mat1 + mat2;
        cout << "Sum of 2 matrix: " << endl << sum << endl;
        sub = mat1 - mat2;
        cout << "Minus of 2 matrix: " << endl << sub << endl;
    } else
        cout << "Can't do add and minus 2 matrix ..." << endl; 
    
    if (mat1.CanScalarMultiply(mat2)){
        mul = mat1 * mat2;
        cout << "Multify of 2 matrix: " << endl << mul << endl;
        div = mat1 / mat2;
        cout << "Devision of 2 matrix: " << endl << div << endl;
    } else  
        cout << "Can't do multify and divide 2 matrix ..." << endl;

    if (mat1 == mat2)
        cout << "2 matrix are equal" << endl;
    if (mat1 != mat2)
        cout << "2 matrix are not equal" << endl;

    cout << "== Increase matrix ==" << endl;
    mat1++; cout << mat1 << endl;
    ++mat2; cout << mat2 << endl;

    cout << "== Decrease matrix ==" << endl;
    mat1--; cout << mat1 << endl;
    --mat2; cout << mat2 << endl;

    return 0;
}