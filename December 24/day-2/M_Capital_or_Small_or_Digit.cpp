#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;
    int inCar = int(a);
    if(inCar>=48 && inCar<=57){
        cout<<"IS DIGIT";
    } else if (inCar>=65 && inCar<=90)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    } else if(inCar>=97 && inCar<=122){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}