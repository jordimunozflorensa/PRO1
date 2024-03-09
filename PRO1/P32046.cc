/*
Feu un programa que llegeixi una seqüència de naturals, i que compti i
 * escrigui aquells que acabin amb les mateixes tres xifres que el primer
 * nombre de la seqüència.
L’entrada és una seqüència no buida de naturals més grans o iguals que 100. 
La sortida escriu els nombres de l’entrada que acabin amb les mateixes tres
 * xifres que el primer nombre de la seqüència, així com quants d’aquests
 * nombres hi ha. Utilitzeu el format dels exemples.
*/

#include <iostream>
using namespace std;

int main() {
    int x, y; 
    cin >> x; // llegeixo el numero de referencia
    int num = 0; // compta quants numeros acaben amb les tres mateixes ultimes
    cout << "nombres que acaben igual que " << x << ":" << endl;            // xifres que el primer numero.
    
    while (cin >> y) {
        if ((y%10 == x%10) and ((y/10) % 10 == (x/10) % 10) and ((y/100) % 10 == (x/100) % 10)) {
            cout << y << endl;
            ++num;        
        }
    }
    cout << "total: " << num << endl;
}

