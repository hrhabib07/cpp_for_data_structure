#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string nm,int ag,int m1,int m2){
        name=nm;
        age=ag;
        mark1=m1;
        mark2=m2;
    }
    void hello(){
        cout<<"Hello, "<<name<<endl;
    }
    int total_marks(){
        return mark1+mark2;
    }
};
int main(){
    Person rakib("Rakib Ahmed",19,80,70);
    cout<<rakib.total_marks()<<endl;
    // rakib.hello();
    // cout<<rakib.name<<" "<<rakib.age<<endl; 
    return 0;
}