#include <iostream>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {
    int reference = p[0];
    int copy_x = x;
    int k = p.size();
    for (int i = 1; i < k; ++i) {
        reference += p[i] * copy_x;
        copy_x *= x;
    }
    return reference;
}

int main() {
    int elem, x;
    cin >> elem;
    vector<int> seq(elem);
    for (int i = 0; i < elem; ++i) cin >> seq[i];
    cin >> x;
    cout << evaluate(seq, x) << endl;
}
