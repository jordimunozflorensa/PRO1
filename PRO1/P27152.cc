#include <iostream>
using namespace std;

int main() {
    char letter;
    int value = 0;
    while (cin >> letter) {
        if ((letter == 'a') or (letter == 'e')) value += 1;
        if ((letter == 'o') or (letter == 's')) value += 2;
        if ((letter == 'd') or (letter == 'i') or (letter == 'n') or (letter == 'r')) value += 3;
        if ((letter == 'c') or (letter == 'l') or (letter == 't') or (letter == 'u')) value += 4;
        if ((letter == 'm') or (letter == 'p')) value += 5;
        if ((letter == 'b') or (letter == 'f') or (letter == 'g') or (letter == 'h') or (letter == 'j') or (letter == 'q') or (letter == 'v') or (letter == 'x') or (letter == 'y') or (letter == 'z')) value += 6;
        if ((letter == 'k') or (letter == 'w')) value += 7;
    }
    cout << value << endl;
}
