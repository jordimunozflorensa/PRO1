#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n_elem;
    cin >> n_elem;
    vector<int> seq(1001, 0);
    for (int i = 0; i < n_elem; ++i) {
        int elem;
        cin >> elem;
        ++seq[elem - 1000000000];
    }
    for (int i = 0; i < 1001; ++i) {
        if (seq[i] > 0) cout << 1000000000 + i << " : " << seq[i] << endl;
    }
}
