#include <iostream>
#include <vector>
using namespace std;

// Pre: recives two vectors filled with numbers, V1 size is bigger or equal to V2 size.
// Post: returns a vector with the difference of V1 repect V2.
vector<double> difference(const vector<double> & V1, const vector<double> & V2) {
    int size1 = V1.size();
    int size2 = V2.size();
    vector<double> diff(V1);
    int i = 0, j = 0, k = 0;
    while (i < size1 and j < size2) {
        if (V1[i] < V2[j]) {
            if (k == 0 or V1[i] != diff[k - 1]) {
                diff[k] = V1[i];
                ++k;
            }
            ++i;
        }
        else if (V1[i] > V2[j]) ++j;
        else ++i;
    }
    while (i < size1) {
        if (k == 0 or V1[i] != diff[k - 1]) {
            diff[k] = V1[i];
            ++k;
        }
        ++i;
    }
    vector<double> result(k);
    for (i = 0; i < k; ++i) result[i] = diff[i];
    return result;
}

// int main() {
//     int n1;
//     cin >> n1;
//     vector<double> v1(n1);
//     for (int i = 0; i < n1; ++i) cin >> v1[i];
//     
//     int n2;
//     cin >> n2;
//     vector<double> v2(n2);
//     for (int i = 0; i < n2; ++i) cin >> v2[i];
//     
//     vector<double> result;
//     result = difference(v1, v2);
//     
//     int size = result.size();
//     for (int i = 0; i < size; ++i) {
//         cout << result[i] << ' ';
//     }
//     cout << endl;
// }
