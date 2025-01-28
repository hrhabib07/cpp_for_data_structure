#include<bits/stdc++.h>
using namespace std;
int sqSeq(int x,int n){
    int prev=0;
    if(n<1) return prev;
    
    prev+=pow(x,n);
    prev+=sqSeq(x,n-2);
    
    return prev;
}
int main(){
    int x,n;
    cin>>x>>n;
    int res;
    if(n%2!=0){
        n--;
    }
    res= sqSeq(x,n);
    cout<<res;
    return 0;
}