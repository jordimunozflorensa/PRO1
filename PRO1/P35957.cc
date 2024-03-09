#include <iostream>
using namespace std;

int main() {
    
    int ne, elem, actual;
    cin >> ne;
    bool winner = false;
    bool first = true;
    int i = 0;
    int previous = 0;
    
    while (i < 2*ne and cin >> elem and not winner) {
        ++i;
        // count digits
        int numdig = 1;
        int aux = elem;
        while (aux > 9) {
            ++numdig;
            aux /= 10;
        }
        if (numdig%2 == 0) winner = true;
        else {
            if (elem < 10) actual = elem;
            else {
                int aux1 = elem;
                int aux2 = numdig/2;
                for(int j=0; j<aux2; ++j) aux1/=10;
                actual = aux1%10;
            }
            if (first) { // first digit
                first = false;
                previous = actual;
            }
            if(previous != actual) winner = true;
            else previous = actual;            
        }
    }
    if (not winner) cout << '=' << endl;
    else if (i%2 == 0) cout << "A" << endl;
    else cout << "B" << endl;
}
