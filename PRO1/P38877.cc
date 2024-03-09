#include <iostream>
using namespace std;

void reversing_words(int& x) {
    string s;
    if (cin >> s) {
        reversing_words(x);
        if (x != 0) { 
            cout << s << endl;
            --x;           
        }
    }
}
int main() {
    int x;
    cin >> x;
    reversing_words(x);
}
