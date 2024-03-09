#include <iostream>
#include <vector>
using namespace std;

string exit(int p, vector<int>& v) {
    int tam = v.size();
    vector<bool> aux(tam, false);
    while(not aux[p]) {
        aux[p] = true;
        if (v[p] > 0) {
            if (p+v[p] >= tam) return "right";
            p += v[p];
        } 
        else if (v[p] < 0) {
            if (p+v[p] < 0) return "left";
            p += v[p];
        }
    }
    return "never";
}

// int main() {
//     int vs, p;
//     cin >> vs;
//     vector<int> v(vs);
//     for (int i = 0; i < vs; ++i) cin >> v[i];
//     while (cin >> p) cout << exit(p, v) << endl;
// }
