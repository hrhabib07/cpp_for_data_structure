#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    int count=0;
    while (t--)
    {
        int p,q; cin>>p>>q;
        if(p+2<=q){
            count++;
        }
    };
    cout<<count;
    return 0;
}