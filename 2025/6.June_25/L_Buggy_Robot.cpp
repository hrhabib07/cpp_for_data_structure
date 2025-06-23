#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    string s; cin>>s;
    int l=0,r=0,u=0,d=0;
    for(char c: s){
        if(c=='L') l++;
        if(c=='R') r++;
        if(c=='U') u++;
        if(c=='D') d++;
    }
    int count = 0;
    if(l && r) count+=2*min(l,r);
    if(u && d) count+=2*min(u,d);
    cout<<count;
    return 0;
}
