// Consider a chess board with r rows and c columns, where every square contains between 0 and 9 coins. Supose that the upper-left square is white.
// Write a program such that, given a chess board, computes the total number of coins on its white squares.

#include <iostream>
using namespace std;

int main() {
    //Input begins with the number of rows r and the number of              //columns c. Follow r lines, each one with c characters between //‘0’ and ‘9’.
    int x, y;
    char c;
    cin >> x >> y;
    int sum = 0;
    for (int i = 0; i < x; ++i) {
        bool whitesquare = false; // We have to use boolean to check 
                                  // if it's white or black
        if (i%2 == 0) whitesquare = true; // True starting white                        
        for (int j = 0; j < y; ++j) {
            cin >> c;
            if (whitesquare and (j%2 == 0)) { 
                sum += c - '0';
            }
            else if (not whitesquare and (j%2 != 0)){
                sum += c - '0';
            }
        }
    }
    cout << sum << endl;
}
    

