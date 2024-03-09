#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;
    
    int sum = 0;
    for (int i = 1; i <= size; ++i) {
        int z = size - i + 1;
        for (int j = 1; j <= size; ++j) {
            char c;
            cin >> c;
            if (i == j or j == z)
                sum += int (c) - int ('0');
        }
    }
    cout << sum << endl;
}
