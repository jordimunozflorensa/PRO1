#include <iostream>
using namespace std;

int main() {
    char a = '_', b = '_', c = '_', d = '_';
    char next;
    cin >> next;
    bool found = false;

    while (not found and next != '.') {
        if (a == 'h' and b == 'e' and c == 'l' and d == 'l' and next == 'o') 
            found = true;
        a = b; b = c; c = d; d = next;
        cin >> next;
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;    
}
