#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

Matrix read_data(int n_rows, int n_cols) {
    Matrix M (n_rows + 1, vector<int> (n_cols + 1, 0));
    for (int i = 1; i < n_rows + 1; ++i) {
        for (int j = 1; j < n_cols + 1; ++j) {
            cin >> M[i][j];
        }
    }
    return M;
}

// Given a matrix finds the corner of a field and if its number above is 0
// and its number to its left is 0 increases the counter of growings.
// Pre: the Matrix is filled with numbers and the two integers are the size
// of the Matrix.
// Post: returns a positive number(that is the number of growings).
void fields(const Matrix&M, int n_rows, int n_cols) {
    int growings = 0;
    for (int i = 1; i < n_rows + 1; ++i) {
        for (int j = 1; j < n_cols + 1; ++j) {
            if (M[i][j] != 0 and M[i - 1][j] == 0 and M[i][j - 1] == 0) ++growings;
        }
    }
    cout << growings << endl;
}

int main() {
    int n_rows, n_cols;
    while (cin >> n_rows >> n_cols) {
        Matrix M;
        M = read_data(n_rows, n_cols);
        fields(M, n_rows, n_cols);
    }
}
