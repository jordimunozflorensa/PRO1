#include <iostream>
using namespace std;

int main() {
    
    int n;
    
    while (cin >> n) {
        int m = n;
        int sum = 0;
        while (m > 0) {
            sum += (m%10);
            m = m/10;
        }
        cout << "The sum of the digits of " << n << " is " << sum << "." << endl;
    }
}
