#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Student {
         int idn;
         string name;
         double mark;
         bool repeater;
};

// Pre: 
// Post:
void read_vector(vector<Student> &stu) {
    int size = stu.size();
    for (int i = 0; i < size; ++i) { 
        string repeaters;
        cin >> stu[i].idn;
        cin >> stu[i].name;
        cin >> stu[i].mark;
        cin >> repeaters;
        if (repeaters == "yes") stu[i].repeater = true;
        else stu[i].repeater = false;
    }
}

// Pre:
// Post:
void information(const vector<Student> &stu, double &min, double &max, double &avg) {
    max = avg = 0;
    min = 10;
    int size = stu.size();
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (stu[i].mark != -1 and not stu[i].repeater) {
            if (stu[i].mark > max) max = stu[i].mark;
            if (stu[i].mark < min) min = stu[i].mark;
            ++count;
            avg += stu[i].mark;
        }
    }
    if (count == 0) {
        max = -1; 
        min = -1;
        avg = -1;
    }
    else avg /= count;
}

int main() {
    int n_students;
    cin >> n_students;
    vector<Student> stu(n_students);
    double max, min, avg;
    information(stu, min, max, avg);
    cout << max << ' ' << min << ' ' << avg << endl;
}
