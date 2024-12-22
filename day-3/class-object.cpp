#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int age;
    int cls;
    int roll;
    char section;
};

int main(){
    Student s1;
    s1.age=19;
    s1.roll=19;
    s1.section='A';
    char s1Name[100]="Rahim";
    strcpy(s1.name, s1Name);
    
    cout<<s1.name;
    return 0;
}