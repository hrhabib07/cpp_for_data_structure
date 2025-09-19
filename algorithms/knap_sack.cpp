#include <bits/stdc++.h>
using namespace std;
int v[1005],w[1005];


int knacpsack(int n, int mx_wt){
    if(n<0 || mx_wt <= 0) return 0;
    if(w[n]<= mx_wt){
        int op1 = knacpsack(n-1,mx_wt-w[n]) + v[n];
        int op2 = knacpsack(n-1,mx_wt);
        return max(op1,op2);
    } else{
        return knacpsack(n-1,mx_wt);
    }
}


int main() {
    int n;
    int mx_wt;
    cin>>n>>mx_wt;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>w[i];
    }
    knacpsack(n-1,mx_wt);
    return 0;
}
