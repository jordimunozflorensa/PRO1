#include <iostream>
using namespace std;

int main() {
    int n;
    bool space = false;
    while (cin >> n) {
        if (space) cout << endl;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << n;
            }
            cout << endl;
            space = true;
        }
    }
}
