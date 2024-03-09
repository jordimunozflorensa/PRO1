/*Write a program that reads a sequence of characters, each one codifying a
 * movement (‘n’ for north, ‘s’ for south, ‘e’ for east, and ‘w’ for west),
 * and that computes the final position of an object initially located at 
 * (0, 0). Suppose that the first component corresponds to the east-west 
 * direction, that going est means adding 1 to that component, and that 
 * going south means adding 1 to the second component.
 Input consists of a sequence of characters ‘n’, ‘s’, ‘e’, or ‘w’.
 Output prints the final position of an object initially located at (0, 0).
 */

#include <iostream>
using namespace std;

int main() {
    char movement;
    int position1 = 0; // component for the east-west direction
    int position2 = 0; // component fot the north-south direction
    while (cin >> movement) {
        if (movement == 'n') --position2;
        else if (movement == 's') ++position2;
        else if (movement == 'e') ++position1;
        else --position1;
    }
    cout << "(" << position1 << ", " << position2 << ")" << endl; 
}
