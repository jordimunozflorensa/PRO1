#include <iostream>
#include <vector>
using namespace std;

void reverse (int n) {
    if (n > 0) {
        string s;
        cin >> s;
        reverse (n - 1);
        for (int i = s.length() - 1; i >= 0; --i) cout << s[i];
        cout << endl;
    }
}
int main() {
    int number;
    cin >> number;
    reverse (number);
}
