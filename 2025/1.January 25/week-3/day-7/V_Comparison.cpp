#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='=' && a==b){
        cout<<"Right";
    } else if (c=='>'&& a>b){
        cout<<"Right";
    } else if (c=='<'&& a<b){
        cout<<"Right";
    } else{
        cout<<"Wrong";
    }
    // cout<<a<<" "<<c<<" "<<b;
    return 0;
}