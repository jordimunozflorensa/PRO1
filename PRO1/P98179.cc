#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v) {
    bool found = false;
    int i = v.size() - 1;
    double last = v[i];
    while (not found and i > 0) {
        if (last >= v[i-1]) found = true;
        else {
            v[i] = v[i-1];
            v[i-1] = last;
        }
        --i;
    }
}

// int main() {
//     int n;
//     cin >> n;
//     vector<double> v(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> v[i];
//     }
//     insert(v);
//     for (int i = 0; i < n; ++i) {
//         cout << v[i] << ' ';
//     }
//     cout << endl;
// }
