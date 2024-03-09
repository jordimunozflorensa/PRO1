#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main() {
    char c;
    cin >> c;
    string s;
    bool b;
    
    if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) b = true;
    else b = false;
    print_line(c, "letter", b);
    
    if ((c == 'a') or (c == 'e') or (c == 'i') or (c == 'o') or (c == 'u') or (c == 'A') or (c == 'E') or (c == 'I') or (c == 'O') or (c == 'U'))  b = true;
    else b = false;
    print_line(c, "vowel", b);
    
    if (((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) and not((c == 'a') or (c == 'e') or (c == 'i') or (c == 'o') or (c == 'u') or (c == 'A') or (c == 'E') or (c == 'I') or (c == 'O') or (c == 'U'))) b = true;
    else b = false;
    print_line(c, "consonant", b);
    
    if (c >= 'A' and c <= 'Z') b = true;
    else b = false;
    print_line(c, "uppercase", b);
    
    if (c >= 'a' and c <= 'z') b = true;
    else b = false;
    print_line(c, "lowercase", b);
    
    if (c >= '0' and c <= '9') b = true;
    else b = false;
    print_line(c, "digit", b);
}
