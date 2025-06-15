#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    double gpa;
};

int main() {
    Student rakib;
    rakib.name = "Rakib Ahmed";
    rakib.roll = 109;
    rakib.gpa = 4.98;
    cout<<rakib.name<<" "<<rakib.roll<<" "<<rakib.gpa;
    return 0;
}
