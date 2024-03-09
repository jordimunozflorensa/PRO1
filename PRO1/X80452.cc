#include <iostream>
using namespace std;

int main() {
    int n;
    int count1, count2;
    while (cin >> n) {
        int k = n;
        count1 = count2 = 0;
        while (count1*7 + count2*4 != k) {
            if ((n - 7) % 7 == 0) {
                n = n-7;
                ++count1;
            }
            else {
                n = n-4;
                ++count2;
            }
        }
        cout << count1 << ' ' << count2 << endl;
    }
}
