#include <iostream>
using namespace std;

int main () {
    
    int n;
    cin >> n;
    
    if (n == 0) cout << n << endl;
    else {
        while (n != 0){
            int res = n%10; cout << res;
            n = n/10;
        }
        cout << endl;
    }
}
