#include <iostream>
using namespace std;

int main() {

    int r, x;
    cin >> r >> x;
    
    int sum = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < x; ++j) {
            char c;
            cin >> c;
            sum += int (c) - int ('0');
        }
    }
    cout << sum << endl;
}
