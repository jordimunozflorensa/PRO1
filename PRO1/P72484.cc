
#include <iostream>
using namespace std;

int main(){
    
    int n; // read the size of the rhombus
    cin >> n;
    int size = 2*n -1; // rhombus side
    int block2 = n-1; // start block2
    int block3 = n; // start block3
    int left = n-1; // paint empties
    int middle = n; // paint_*
    
    for(int i = 0; i < size; i++){
        if(i < block2){ //block1
            for(int j = 0; j < size; j++){
                if(j < left) cout << ' ';
                else if(j < middle) cout << '*';
            }
            --left;
            ++middle;
        }
        else if(i < block3){ 
            for(int j = 0; j < size; ++j) cout << '*';
        }
        else{ 
            ++left;
            --middle;
            for(int j = 0; j < size; j++){
                if(j < left) cout << ' ';
                else if(j < middle) cout << '*';
            }
        }
        cout << endl;
    }
}

