#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string num(n);
    int t = n;
    int i = 0;
    while (t)
    {
        num[i]=char(t%10);
        t/=10;
        i++;
    }
    cout<<num;
    return 0;
}