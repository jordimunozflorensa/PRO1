#include <iostream>
#include <vector>
using namespace std;

void calcula_posicions (const vector <double>& v, int& p, int& q) {
    cout.setf(ios::fixed);
    cout.precision(6);
    int size = v.size();
    double max1 = v[0];
    for (int i = 1; i < size; ++i) {
        if (v[i] > max1) {
            max1 = v[i];
            p = i;
        }
    }
    double max2 = v[0];
    for (int i = 0; i < p; ++i) {
        if (v[i] > max2) {
            max2 = v[i];
            q = i;
        }
    }
    double average = 0;
    for (int i = q; i <= p; ++i) {
        average += v[i];
    }
    cout << average/(p-q+1) << endl;     
}

int main() {
    int x;
    while (cin >> x) {
        int p = 0;
        int q = 0;
        vector <double> data(x);
        for (int i = 0; i < x; ++i) {
            cin >> data[i];
        }
        calcula_posicions(data, p, q);
    }
}
