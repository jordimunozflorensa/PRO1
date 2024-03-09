#include <iostream>
#include <vector>
using namespace std;

int position_maximum(const vector<double>& v, int m) {
    double maximum = v[0];
    int max_pos = 0;
    for (int i = 1; i <= m; ++i) {
        if (v[i] > maximum) {
            maximum = v[i];
            max_pos = i;
        }
    }
    return max_pos;
}
