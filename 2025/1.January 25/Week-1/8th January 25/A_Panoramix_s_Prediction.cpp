#include<bits/stdc++.h>
using namespace std;
bool isPrime (int n){
    bool res = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            res=false;
        }
    }
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    bool isMPrime = isPrime(m);
    
    string s = "YES";
    if(isMPrime){
    for (int i = (n+1); i < m; i++)
    {
        bool r = isPrime(i);
        if(r==true){
            s="NO";
            break;
        };
    } 
    } else{
    s="NO";
    }
    cout<<s;
    return 0;
}