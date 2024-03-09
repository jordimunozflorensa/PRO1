#include <iostream>
using namespace std;

//Precondition: all numbers of n are naturals strictly positive, the sequence 
//of n ends with a 0.
//The void reads a sequence from the input and computes the parameters sum and
//last, the sum of the elements and the last element of the read sequence.
void info_sequence(int& sum, int& last) {
    int n;
    sum = 0;
    cin >> n;
    while (n != 0) {
        last = n;
        sum += n;
        cin >> n;
    }
}
//The main program compares if the sequence is similar to the reference sequence
//by using the void. If they are similiar the count increases by one and the
//output prints the number of sequences equal to the reference one.
int main() {
    int sum, last, count = 1; //count is the number of similar sequences
    info_sequence(sum, last);
    int reference_sum = sum, reference_last = last;
    while (sum != 0) {
        info_sequence(sum, last);
        if (reference_sum == sum and reference_last == last) ++count;
    }
    cout << count << endl;
}
