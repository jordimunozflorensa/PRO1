#include <iostream>
using namespace std;

int main (){
    
    char c;
    cin >> c;
    
    int sum = 0;
    
    while (c != '.') {
        if (c == 'a') ++sum;
        cin >> c;
    }
        cout << sum << endl;
}
