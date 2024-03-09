/*Write a program that reads a matrix, and afterwards prints the rows, the 
columns and the elements that are asked for.
* The input reads two numbers which tell the size of a Matrix, the elements of
the Matrix, and afterwards a list of strings which are accompanied with one or 
two numbers.
* The output prints what suggested the strings. */

#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

// This function is used to read two variables with the number of rows and
// columns of a Matrix and fills a Matrix.
// Post: fills a Matrix with values.
Matrix read_data() {
    int n_rows, n_col;
    cin >> n_rows >> n_col;
    Matrix Data(n_rows, vector<int> (n_col));
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_col; ++j) {
            cin >> Data[i][j];
        }
    }
    return Data;
}
//Pre: reads a Matrix filled with values.
//Post: prints the value in the row that is been suggested.
void rows (const Matrix& M) {
    int n_columns = M[0].size();
    int position;
    cin >> position;
    cout << "row" << ' ' << position << ":";
    for (int i = 0; i < n_columns; ++i) {
        cout << ' ' << M[position - 1][i];
    }
    cout << endl;
}
//Pre: reads a Matrix filled with values.
//Post: prints the value in the column that is been suggested.
void columns (const Matrix& M) {
    int n_rows = M.size();
    int position;
    cin >> position;
    cout << "column" << ' ' << position << ":";
    for (int i = 0; i < n_rows; ++i) {
        cout << ' ' << M[i][position - 1];
    }
    cout << endl;
}
//Pre: reads a Matrix filled with values.
//Post: prints the value in the postion of the Matrix that is been suggested.
void element (const Matrix& M) {
    int row_position;
    int col_position;
    cin >> row_position >> col_position;
    cout << "element" << ' ' << row_position << ' ' << col_position << ":";
    cout << ' ' << M[row_position - 1][col_position - 1] << endl;
}

int main() {
    Matrix M = read_data();
    string question;
    while (cin >> question) {
        if (question == "row") rows(M);
        else if (question == "column") columns(M);
        else if (question == "element") element(M);
    }
}
