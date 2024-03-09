#include <iostream>
using namespace std;

void reversing_words(int& count) {
    string s;
    if (cin >> s) {
        ++count;
        reversing_words(count);
        if (count <= 0) cout << s << endl;
        count = count - 2;
    }
}
int main() {
    int count = 0;
    reversing_words(count);
}
