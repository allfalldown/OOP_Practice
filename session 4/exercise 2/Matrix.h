#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Matrix{
    private:
        int column, row;
        vector<vector<int>> element;
    public:
        Matrix(){
            column = row = 0;
        }
        ~Matrix(){}  

        bool IsSameLevel(Matrix mat){
            return ((column == mat.column && row == mat.row)?true:false);
        }

        bool CanScalarMultiply(Matrix mat){
            return ((column == mat.row)?true:false);
        }

        void TMatrix(Matrix &mat){
            Matrix tmp;
            for (int i=0; i<mat.column; i++)
                for (int j=0; j<mat.row; j++){
                    tmp.element[j][i] = mat.element[i][j]; 
                }
            mat = tmp;
        }

        friend istream& operator>>(istream& is, Matrix &mat){
            int value;
            cout << "Column matrix: "; cin >> mat.column;
            cout << "Row matrix: "; cin >> mat.row;
            for (int i=0; i<mat.row; i++){
                vector<int> temp;
                for (int j=0; j<mat.column; j++){ 
                    cout << "Element[" << i << ", " << j << "]: "; cin >> value;
                    temp.push_back(value);
                }       
                mat.element.push_back(temp);
            }
            cout << "-------" << endl;
            return is;
        }

        friend ostream& operator<<(ostream& os, Matrix &mat){
            cout << "== Detail matrix ==" << endl;
            for (int i=0; i<mat.row; i++){
                for (int j=0; j<mat.column; j++){ 
                    cout << mat.element[i][j] << " ";
                }
                cout << endl;
            }
            return os;
        }

        Matrix operator + (Matrix mat){
            for (int i=0; i<mat.row; i++){
                for (int j=0; j<mat.column; j++){ 
                    element[i][j] += mat.element[i][j];
                }
            }
            return *this;
        }
        
        Matrix operator - (Matrix mat){
            for (int i=0; i<mat.row; i++){
                for (int j=0; j<mat.column; j++){ 
                    element[i][j] -= mat.element[i][j];
                }
            }
            return *this;
        }

        Matrix operator * (Matrix mat){
            for(int i=0; i<column; i++){
                for(int j=0; j<mat.row;j ++){
                    int tmp = 0;
                    for(int k=0; k<row; k++)
                        tmp+=(element[i][k]*element[k][j]);
                    element[i][j] = tmp;
                }
            }
            return *this;
        }

        Matrix operator / (Matrix mat){
            mat.TMatrix(mat);
            for(int i=0; i<column; i++){
                for(int j=0; j<mat.row;j ++){
                    int tmp = 0;
                    for(int k=0; k<row; k++)
                        tmp+=(element[i][k]*element[k][j]);
                    element[i][j] = tmp;
                }
            }
            return *this;
        }

        Matrix operator += (Matrix mat){
            for (int i=0; i<mat.row; i++){
                for (int j=0; j<mat.column; j++){ 
                    element[i][j] += mat.element[i][j];
                }
            }
            return *this;
        }

        Matrix operator -= (Matrix mat){
            for (int i=0; i<mat.row; i++){
                for (int j=0; j<mat.column; j++){ 
                    element[i][j] -= mat.element[i][j];
                }
            }
            return *this;
        }

        Matrix operator *= (Matrix mat){
            for(int i=0; i<column; i++){
                for(int j=0; j<mat.row;j ++){
                    int tmp = 0;
                    for(int k=0; k<row; k++)
                        tmp+=(element[i][k]*element[k][j]);
                    element[i][j] = tmp;
                }
            }
            return *this;
        }

        Matrix operator /= (Matrix mat){
            mat.TMatrix(mat);
            for(int i=0; i<column; i++){
                for(int j=0; j<mat.row;j ++){
                    int tmp = 0;
                    for(int k=0; k<row; k++)
                        tmp+=(element[i][k]*element[k][j]);
                    element[i][j] = tmp;
                }
            }
            return *this;
        }

        ////

        Matrix operator += (int k){
             for (int i=0; i<row; i++){
                for (int j=0; j<column; j++){ 
                    element[i][j] += k;
                }
            }
            return *this;
        }

        Matrix operator -= (int k){
            for (int i=0; i<row; i++){
                for (int j=0; j<column; j++){ 
                    element[i][j] -= k;
                }
            }
            return *this;
        }

        bool operator == (Matrix mat){
            if (column == mat.column && row == mat.row){
                for (int i=0; i<row; i++){
                    for (int j=0; j<column; j++){ 
                        if (element[i][j] != mat.element[i][j])
                            return false;
                    }
                }
                return true;
            }
            return false;
        }

        bool operator != (Matrix mat){
            if (column != mat.column && row != mat.row){
                for (int i=0; i<row; i++){
                    for (int j=0; j<column; j++){ 
                        if (element[i][j] == mat.element[i][j])
                            return false;
                    }
                }
                return true;
            }
            return false;
        }

        //postfix ++
        Matrix operator ++ (int){
            Matrix tmp = *this;
            for (int i=0; i<tmp.column; i++)
                for (int j=0; j<tmp.row; j++)
                    tmp.element[i][j]++;
            return tmp;
        }

        //prefix ++
        Matrix& operator ++ (){
            for (int i=0; i<column; i++)
                for (int j=0; j<row; j++)
                    ++element[i][j];
            return *this;
        }

        //postfix --
        Matrix operator -- (int){
            Matrix tmp = *this;
            for (int i=0; i<tmp.column; i++)
                for (int j=0; j<tmp.row; j++)
                    tmp.element[i][j]--;
            return tmp;
        }

        //prefix --
        Matrix& operator -- (){
            for (int i=0; i<column; i++)
                for (int j=0; j<row; j++)
                    --element[i][j];
            return *this;
        }

        friend Matrix operator ~ (Matrix &mat){
            mat.TMatrix(mat);
            return mat;
        }
        
};