#include <vector>
#include <iostream>
using namespace std;
typedef vector< vector<int> > Matrix;

Matrix read_matrix(int n_rows, int n_cols) {
    Matrix Data(n_rows, vector<int> (n_cols));
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_cols; ++j) {
            cin >> Data[i][j];
        }
    }
    return Data;
}

bool first_diagonal (const Matrix& M, int row_pos, int col_pos) {
    int M_rows = M.size();
    int M_col = M[0].size();
    bool ascending = true;
    int i = row_pos + 1, j = col_pos + 1;
    while (ascending and i < M_rows and j < M_col) {
        if (M[i][j] > M[i-1][j-1]);
        else ascending = false;
        ++j;
        ++i;
    }
    return ascending;
}

bool second_diagonal (const Matrix& M, int row_pos, int col_pos) {
    bool ascending = true;
    int i = row_pos - 1, j = col_pos - 1;
    while (ascending and i >= 0 and j >= 0) {
        if (M[i][j] > M[i+1][j+1]);
        else ascending = false;
        --j;
        --i;
    }
    return ascending;
}

bool third_diagonal (const Matrix& M, int row_pos, int col_pos) {
    bool ascending = true;
    int M_rows = M.size();
    int i = row_pos + 1, j = col_pos - 1;
    while (ascending and i < M_rows and j >= 0) {
        if (M[i][j] > M[i-1][j+1]);
        else ascending = false;
        --j;
        ++i;
    }
    return ascending;
}

bool fourth_diagonal (const Matrix& M, int row_pos, int col_pos) {
    int M_col = M[0].size();
    bool ascending = true;
    int i = row_pos - 1, j = col_pos + 1;
    while (ascending and i >= 0 and j < M_col) {
        if (M[i][j] > M[i+1][j-1]);
        else ascending = false;
        ++j;
        --i;
    }
    return ascending;
}

int main() {
    int row, col;
    while (cin >> row >> col) {
        Matrix M = read_matrix(row, col);
        cin >> row >> col;
        bool correct = first_diagonal(M, row, col);
        if (correct) {
            correct = second_diagonal(M, row, col);
            if (correct) {
                correct = third_diagonal(M, row, col);
                if (correct) {
                    correct = fourth_diagonal(M, row, col);
                }
            }
        }
        if (correct) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
