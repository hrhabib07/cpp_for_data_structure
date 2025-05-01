#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    if(n==m && m==a){
        cout<<1;
    } else if(a>=m && a>=n){
        cout<<1;
    } else if(n>a && m>a &&(n%a!=0 || m%a!=0)){
    int hReq=0;
    int wReq=0;
    if(n%a==0){
        hReq=n/a;
    } else{
        hReq=(n/a)+1;
    }
    if(m%a==0){
        wReq=m/a;
    } else{
        wReq=(m/a)+1;
    }
    cout<<(hReq+wReq);
    } else if(n>a && m<=a){
    int hReq=0;
    int wReq=0;
    if(n%a==0){
        hReq=n/a;
    } else{
        hReq=(n/a)+1;
    }
    cout<<(hReq+wReq);
    } else if(n<=a && m>a){
    int hReq=0;
    int wReq=0;
    if(m%a==0){
        wReq=m/a;
    } else{
        wReq=(m/a)+1;
    }
    cout<<(hReq+wReq);
    }else if(n>a && m>a &&(n%a==0 && m%a==0)){
        long long int res= n;
    cout<<res;
    } 
    return 0;
}