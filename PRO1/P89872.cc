#include <iostream>
using namespace std;

int main() {
    string word;
    string max = "";
    string max2 = "";
    
    while (cin >> word) {
        if (word > max) {
            max2 = max;
            max = word;
        }
        else if (word > max2 and word != max) max2 = word;
    }
    cout << max2 << endl;
}
