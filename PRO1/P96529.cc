#include <iostream>
#include <vector>
#include <string>

using namespace std;

char op(char c) {
    if (c == ')') return '(';
    else return '[';
}

int main() {
    string s;
    while (cin >> s) {
        bool ok = true;
        vector<char> seq;
        int i = 0;
        while (i < s.size() and ok) {
            if (s[i] == '(' or s[i] == '[') seq.push_back(s[i]);
            else {
                if (seq.empty() or seq[seq.size() - 1] != op(s[i])) ok = false;
                else seq.pop_back();
            }
            ++i;
        }
        if (seq.size() > 0) ok = false;
        
        if (ok) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
