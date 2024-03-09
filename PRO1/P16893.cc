// Write a program that checks that every given matrix can be the solution of a.
// Sudoku.
// Input consists of a number n, followed by n cases. Every case has 9 rows, each.
// one with 9 numbers between 1 and 9.
// The output prints “yes” or “no” depending on whether the given matrix follows.
// the rules of the solutions of Sudokus.
#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

// Given a matrice checks if its rows follow the rules of Sudoku.
// Pre:
// Post: returns true or false depending on the numbers of the matrice.
bool check_row (const Matrix& M) {
    int size_row = M.size();
    int size_col = M[0].size();
    bool is_sudoku = true;
    int i = 0;
    while (is_sudoku and i < size_row) {
        vector<bool> rows(9, false);
        int j = 0;
        while (is_sudoku and j < size_col) {
            int aux_row = M[i][j];
            if(not rows[aux_row-1]) rows[aux_row-1] = true;
            else is_sudoku = false;
            ++j;
        }
        ++i;
    }
    return is_sudoku;
}

// Given a matrice checks if its columns follow the rules of Sudoku.
// Pre:
// Post: returns true or false depending on the numbers of the matrice.
bool check_col (const Matrix& M) {
    int size_row = M.size();
    int size_col = M[0].size();
    bool is_sudoku = true;
    int i = 0;
    while (is_sudoku and i < size_row) {
        vector<bool> columns(9, false);
        int j = 0;
        while (is_sudoku and j < size_col) {
            int aux_col = M[j][i];
            if(not columns[aux_col-1]) columns[aux_col-1] = true;
            else is_sudoku = false;
            ++j;
        }
        ++i;
    }
    return is_sudoku;
}

// Given a matrice checks if its 9 regions follow the rules of Sudoku.
// Pre:
// Post: returns true or false depending on the numbers of the matrice.
bool check_squares3x3(const Matrix& M) {
    bool is_sudoku = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            vector<bool> reference(9, false);
            int row_pos = 3*i, col_pos = 3*j;
            
            for (int k = row_pos; k < row_pos + 3; ++k) {
                for (int l = col_pos; l < col_pos + 3; ++l) {
                    int aux = M[k][l];
                    if(not reference[aux-1]) reference[aux-1] = true;
                    else is_sudoku = false;
                }
            }
        }
    }
    return is_sudoku;
}

// Given a matrice fills that matrice with 9 rows and 9 columns of numbers.
// Pre: the size of the matrice will be always a 9*9.
// Post: fills the matrice
void read_sudoku (Matrix& M){
    M = Matrix(9,vector<int>(9));
    for(int i = 0; i < 9; ++i) {
        for(int j = 0; j < 9; ++j) {
            cin >> M[i][j];
        }
    }
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Matrix M;
        read_sudoku(M);
        if (check_row(M) and check_col(M) and check_squares3x3(M)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
}
