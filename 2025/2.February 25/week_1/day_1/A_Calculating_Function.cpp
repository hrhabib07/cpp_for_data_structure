#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin>>n;
    long long int r = (n+1)/2;
    if(n%2==0) cout<<r;
    else cout<<-r;
    return 0;
}