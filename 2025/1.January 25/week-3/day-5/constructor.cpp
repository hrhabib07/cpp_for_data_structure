#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll;
        int clss;
        char sec;

        Student(int r,char s, int c,    const char *nm){
            roll=r;
            sec=s;
            clss=c;
            strcpy(name,nm);
        }
};

int main(){
    Student karim(55,'A',13,"Karim Uddin");
    Student solim(15,'A',11,"Solim Uddin");

    cout<<"Name: "<<karim.name<<"; Roll: "<<karim.roll<<"; Section: "<<karim.sec<<endl;
    cout<<"Name: "<<solim.name<<"; Roll: "<<solim.roll<<"; Section: "<<solim.sec<<endl;
    return 0;
}