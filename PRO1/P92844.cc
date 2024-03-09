#include <iostream>
#include <vector>
using namespace std;
typedef vector<char> Row;
typedef vector<Row> Rectangle;

bool appears_rows(char c, int i, const Rectangle& r, int n_cols) {
    for (int j = 0; j < n_cols; ++j) {
        if (r[i][j] == c) return true;
    }
    return false;
}

bool appears_cols(char c, int j, const Rectangle& r, int n_rows) {
    for (int i = 0; i < n_rows; ++i) {
        if (r[i][j] == c) return true;
    }
    return false;
}

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {
    int n_rows = r.size();
    int n_cols = r[0].size();
    int i1, i2, j1, j2;
    i1 = i2 = j1 = j2 = 0;
    
    i1 = 0;
    while (not appears_rows(c, i1, r, n_cols)) ++i1;
    
    i2 = n_rows- 1;
    while (not appears_rows(c, i2, r, n_cols)) --i2;
    
    j1 = 0;
    while (not appears_cols(c, j1, r, n_rows)) ++j1;
    
    j2 = n_cols - 1;
    while (not appears_cols(c, j2, r, n_rows)) --j2;
    rows = i2 - i1 + 1;
    cols = j2 - j1 + 1;
}

int main(){ 
  int n, m;
  while (cin >> n >> m) {
    Rectangle r(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) cin >> r[i][j];

    int t;
    cin >> t;
    while (t--) {
      char c;
      cin >> c;
      int rows, cols;
      minimal_dimensions(c, r, rows, cols);
      cout << rows << " " << cols << endl;
    }
  }
}
