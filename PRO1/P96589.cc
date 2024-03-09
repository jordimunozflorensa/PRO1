#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    bool found = false;
    
    if (c >= '0' and c <= '9') {
        found = true;
        cout << "digit" << endl;
    }
    if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) {
        found = true;
        cout << "lletra" << endl;
    }
    if (not found) cout << "res" << endl;
}    
