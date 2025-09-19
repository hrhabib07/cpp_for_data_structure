#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    long long int res = 0;
    vector<long long int>v;
    for (int i = 0; i <= n; i++)
    {
        if(i==0) v.push_back(0);
        else if(i==1) v.push_back(1);
        else if(i==2) v.push_back(1);
        else if(i==3) v.push_back(2);
        else if(i>=4) {
            res = v[i-1]+v[i-2]+v[i-3]+v[i-4];
            v.push_back(res);
        }
    }
    cout<<v[n]<<endl;
    return 0;
}
