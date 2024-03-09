#include <iostream>
using namespace std;

int main() {
    int d, n, t;
    cin >> d >> n >> t;
    
    int sum = 1; // num of weeks
    int a; // allowance
    int total = n; // rename of n
    int exp = d; // rename of d
    int x = 0; // num of weeks with positive balance
    while (sum <= t and cin >> a){
        total += a;
        
        if (total > exp) ++x;
        total -= exp;
        ++sum;
    }
    cout << x << endl;
}
