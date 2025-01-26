#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};

int main(){
    Person alex("Alex",21);
    cout<<alex.name<<" "<<alex.age<<endl;
    return 0;
}