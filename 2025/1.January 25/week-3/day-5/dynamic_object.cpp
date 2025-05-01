#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        char sec;
        int clss;

    Student(int r,int c, char s,const char*nm){
        roll=r;
        clss=c;
        sec=s;
        strcpy(name,nm);
    }
};
int main(){
    Student* habib = new Student(19,13,'A',"Habib");
    cout<<habib->name<<endl;
    return 0;
}