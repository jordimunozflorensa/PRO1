#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        int z = n - i + 1;
        for (int j = 1; j <= n; ++j) {
            if (j == z) cout << "/";
            else if (z > j) cout << "+";
            else cout << "*";
        }
        cout << endl;        
    }
}
