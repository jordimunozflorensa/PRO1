#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    while (cin >> number) {
        vector <int> sequencia(number);
        for (int i = 0; i < number; ++i) {
            cin >> sequencia[i];
        }
        bool first = true;
        for (int j = number - 1; j >= 0; --j) {
            if (not(first)) cout << ' ';
            first = false;
            cout << sequencia[j];
        }
        cout << endl;
    }
}
