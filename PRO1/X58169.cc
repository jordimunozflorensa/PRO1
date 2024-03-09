#include <iostream>
using namespace std;

void infoSecuencia(int& max, int& lpos) {
    if (lpos > max) max = lpos;
}

int main() {
    int n, lpos, max = 0, count = 0, position1 = 1;
    for (int i = 0; i < 2; ++i) {
        if (i == 0) {
            cin >> n;
            while (n != 0) {
                ++count;
                lpos = n;
                infoSecuencia(max, lpos);
                cin >> n;
                if (max == lpos) position1 = count;
            }
            cout << max << ' ' << position1 << ' ';
        }
        else {
            cin >> n;
            int position2 = 1;
            while (n != 0 and n != max) {
                cin >> n;
                ++position2;
            }
            if (n == max) cout << position2 << endl;
            else cout << '-' << endl;            
        }
    }
}

