#include <iostream>
#include <vector>
using namespace std;

string equal_sum(const vector<int>& seq, int sum) {
    for (int i = 0; i < seq.size(); ++i) {
        if (seq[i] == sum - seq[i]) return "YES";
    }
    return "NO";
}

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        vector<int> seq(n);
        for (int i = 0; i < n; ++i) {
            cin >> seq[i];
            sum += seq[i];
        }
        cout << equal_sum(seq, sum) << endl;
    }
}
