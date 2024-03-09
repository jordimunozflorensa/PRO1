#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

string pairs_in_sequence(const vector<int>& seq) {
    int size1 = seq.size();
    int size0 = seq.size() - 1;
    for (int i = 0; i < size0; ++i) {
        for (int j = i + 1; j < size1; ++j) {
            if (is_prime (seq[i] + seq[j])) return "yes";
        }
    }
    return "no";
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> seq(n);
        for (int i = 0; i < n; ++i) cin >> seq[i];
        cout << pairs_in_sequence(seq) << endl;
    }
}
