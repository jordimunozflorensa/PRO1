// Write a program that solves word searches! Words can be written horizontally
// (from left to right), vertically (from top to bottom) diagonally (from left 
// to right and from top to bottom).
// Input consists in different test data. Each test data contains three parts: 
// the first part contains three natural numbers x, m and n not null. The second 
// part is a sequence of x words. The third part is a matrix with m rows and n 
// columns that represents the word search.
// For each test data print the matrix of the input, changing the letters which
// form part of any word to uppercase letters. Separate each letter of the word 
// search by a space; separate each test data by an empty line.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector< vector<char> > Matrix;
typedef vector<string> list;

// Pre: the number is positive and no null.
// Post returns a vector of strings.
list read_vector( int n_strings) {
    list seq(n_strings);
    for (int i = 0; i < n_strings; ++i) {
        cin >> seq[i];
    }
    return seq;
}

// Pre: the numbers are positive and no null.
// Post returns a vmatrix of chars that are letters in lowercase.
Matrix read_matrix(int n_rows, int n_cols) {
    Matrix M(n_rows, vector<char>(n_cols));
    for (int i = 0; i < n_rows; ++i) {
        for (int j = 0; j < n_cols; ++j) {
            cin >> M[i][j];
        }
    }
    return M;
}

// Pre: the Matrix is formed by lowecase and uppercase letters.
// Post:
void print_Matrix(const Matrix& M) {
    int row_size = M.size();
    int col_size = M[0].size();
    for (int i = 0; i < row_size; ++i) { 
        bool first = false;
        for (int j = 0; j < col_size; ++j) {
            if (first) cout << ' ';
            cout << M[i][j];
            first = true;
        }
        cout << endl;
    }
}

// Pre: rcives a Matrix, the size of a word, the position from where starts 
// changing letters to uppercase and finally two numbers that can be 0 or 1.
// Post: returns a Matrix with uppercase and lowercase letters.
void uppercase(Matrix& M, int size_word, int i, int j, int row_pos, int col_pos) {
    int k = 0;
    while (k < size_word) {
        if (M[i][j] >= 'a' and M[i][j] <= 'z')  M[i][j] = char(int(M[i][j]) - int('a') + int('A'));
        i += row_pos;
        j += col_pos;
        ++k;
    }
}

// Pre: the Matrix is filled with letters, a words to check if the word is 
// inside the Matrix vertically, and the positions from where starts to check.
// Post: 
bool check_vertically(const Matrix& M, string word, int i, int j) {
    int k = 0;
    int size_word = word.length();
    int M_rows = M.size();
    int M_cols = M[0].size();
    while (i < M_rows and j < M_cols and k < size_word) {
        if (word[k] != M[i][j]) return false;
        ++i;
        ++k;
    }
    return k == word.length();
}

// Pre: the Matrix is filled with letters, a words to check if the word is 
// inside the Matrix diagonally, and the positions from where starts to check.
// Post: 
bool check_diagonally(const Matrix& M, string word, int i, int j) {
    int k = 0;
    int size_word = word.length();
    int M_rows = M.size();
    int M_cols = M[0].size();
    while (i < M_rows and j < M_cols and k < size_word) {
        if (word[k] != M[i][j]) return false;
        ++j;
        ++i;
        ++k;
    }
    return k == word.length();
}

// Pre: the Matrix is filled with letters, a words to check if the word is 
// inside the Matrix horizontally, and the positions from where starts to check.
// Post: 
bool check_horizontally(const Matrix& M, string word, int i, int j) {
    int k = 0;
    int size_word = word.length();
    int M_rows = M.size();
    int M_cols = M[0].size();
    while (i < M_rows and j < M_cols and k < size_word) {
        if (word[k] != M[i][j]) return false;
        ++j;
        ++k;
    }
    return k == word.length();
}

// Checks the first letter of every string with all the elements of the Matrix,
// if anyone matches, calls the matrix of checking all the word by diagonal,
// vertical and horizontal, nad if anyone of those is true changes the positions
// where the words is tow uppercase letters.
// Pre: recives two Matrix one is the auxiliar of the other and a vector of
// strings.
// Post: changes the reference Matrix's elements if any word is inside it.
void first_letter (const Matrix& aux, Matrix& M, list seq) {
    int vec_size = seq.size();
    for (int k = 0; k < vec_size; ++k) {
        string word = seq[k];
        int i = 0;
        int size_rows = M.size();
        while (i < size_rows) {
            int size_cols = M[0].size();
            int j = 0;
            while (j < size_cols) {
                if (word[0] == aux[i][j]) {
                    int size_word = word.length();
                    if (check_horizontally(aux, word, i, j)) uppercase(M, size_word, i, j, 0, 1);
                    if (check_vertically(aux, word, i, j)) uppercase(M, size_word, i, j, 1, 0);
                    if (check_diagonally(aux, word, i, j)) uppercase(M, size_word, i, j, 1, 1);
                }
                ++j;
            }
            ++i;
        }
    }
}

int main() {
    int n_strings, n_rows, n_cols;
    bool first = false;
    while (cin >> n_strings >> n_rows >> n_cols) {
        list seq = read_vector(n_strings);
        Matrix M = read_matrix(n_rows, n_cols);
        Matrix aux = M;
        first_letter(aux, M, seq);
        if (first) cout << endl;
        first = true;
        print_Matrix(M);
    }
}
