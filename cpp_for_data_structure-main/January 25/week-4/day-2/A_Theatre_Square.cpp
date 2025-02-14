#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    if(a>=n && a>=m){
        cout<<1;
    } else if((m+n-2*a)==2){
        cout<<4;
    } else{
    long long int newN;
    if(n%a==0){
        newN=((n%a))+n;
    } else{
        newN=(a-(n%a))+n;
    }
    long long int newM;
    if(m%a==0){
        newM=((m%a))+m;
    } else{
        newM=(a-(m%a))+m;
    }
    long long int res=(newN*newM)/(a*a);
    cout<<res;
    }
    return 0;
}