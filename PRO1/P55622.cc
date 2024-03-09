#include <iostream>
using namespace std;

int main (){
    
    int n;
    cin >> n;
    
    int copy = n;
    int num = 1;
    while (n > 9) {
        n /= 10;
        ++num;
    }
    

    cout << "The number of digits of " << copy << " is " << num << '.' << endl;
}
