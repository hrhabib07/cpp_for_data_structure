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
    Person* rakib = new Person("Rakib Ahemd",21);
    Person* sakib= new Person("Sakib Ahemd",23);
    *rakib=*sakib;
    delete sakib;   
    cout<<rakib->name<<" "<<rakib->age;
    return 0;
}