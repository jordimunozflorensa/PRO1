#include <iostream>
#include <vector>
using namespace std;


int common_elements (const vector<int>& X, const vector<int>& Y) {
    int right, left, common;
    right = left = common = 0;
    int size_x = X.size();
    int size_y = Y.size();
    while (left < size_x and right < size_y) {
        if (X[left] < Y[right]) ++left;
        else if (X[left] > Y[right]) ++right;
        else {
            ++left;
            ++right;
            ++common;
        }
    }
    return common;
}
    
int main () {
    int n, m;
    while (cin >> m >> n) {
        vector<int> X(m);
        for (int i=0; i < m; ++i) cin >> X[i];
        vector<int> Y(n);
        for (int i=0; i < n; ++i) cin >> Y[i];
        cout << common_elements(X,Y) << endl;
    }
    return 0;
}
