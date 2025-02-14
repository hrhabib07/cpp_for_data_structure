#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main(){
    Student s1;
    // s.name="Habib"; // this will not work directly 
    s1.cls=9;
    s1.roll=19;
    s1.section='A';
    char nm[100]= "Habib";
    strcpy(s1.name,nm);

    Student s2;
    s2.cls=10;
    s2.roll=55;
    s2.section='A';
    char nm2[100]="Kashim";
    strcpy(s2.name,nm2);

    cout<<"Name: "<<s1.name<<"\nRoll : "<<s1.roll<<'\n';
    cout<<"Name: "<<s2.name<<"\nRoll : "<<s2.roll<<"\n";

    return 0;
}