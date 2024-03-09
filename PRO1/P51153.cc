#include <iostream>
#include <vector>
using namespace std;

string pairs_in_sequence(const vector<int>& seq) {
    int size = seq.size();
    bool even = false;
    bool odd = false;
    int i = 0; 
    while ((not even or not odd) and i < size) {
        if (seq[i]%2 == 0) even = true;
        else odd = true;
        ++i;
    }
    if (even and odd) return "yes";
    else return "no";
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> seq(n);
        for (int i = 0; i < n; ++i) cin >> seq[i];
        cout << pairs_in_sequence(seq) << endl;
    }
}
