#include <iostream>
using namespace std;

void reversing_words() {
    string s;
    if (cin >> s) {
        reversing_words();
        cout << s << endl;
    }
}

int main() {
    reversing_words();
}
