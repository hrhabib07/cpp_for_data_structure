#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=pow(a,b);
    f=pow(c,d);
    if(e>f){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}