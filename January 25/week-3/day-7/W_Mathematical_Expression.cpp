#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,e;
    char c,d;
    cin>>a>>c>>b>>d>>e;
    if(c=='+'&& a+b == e){
        cout<<"Yes";
    } else if (c=='*'&& a*b == e){
        cout<<"Yes";
    } else if(c=='-'&& a-b == e){
        cout<<"Yes";
    } else {
        if(c=='+'){
            cout<<a+b;
        } else if (c=='-'){
            cout<<a-b;
        } else{
            cout<<a*b;
        }
    }
    return 0;
}