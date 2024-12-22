#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int age;
        int cls;
        int roll;
        char section;
    Student(int r, int c, char s, int a, string n){
        roll = r;
        cls = c;
        section = s;
        age = a;
        name = n;
        // strcpy(name, n);
    };
};

int main(){
    Student kuddus(21,9,'A',15,"Kuddus");
    cout<<kuddus.name<<endl;
    return 0;
}