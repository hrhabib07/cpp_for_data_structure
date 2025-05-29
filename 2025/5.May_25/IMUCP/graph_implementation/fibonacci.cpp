#include <bits/stdc++.h>
using namespace std;
vector<int>dp(100,-1);
int f( int n){
    if(n==1) return 1;
    if(n==0) return 0;
    if (dp[n]!=-1) return dp[n];
    else return dp[n] = f(n-1)+f(n-2);
}

int main() {
    int n; cin>>n;
    
    int res = f(n+1);
    cout<<res;
    return 0;
}
