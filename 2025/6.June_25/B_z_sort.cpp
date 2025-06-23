#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n/2; i++)
    {
        cout<<v[i]<<" "<<v[(n-1)-i]<<" ";
    }
    if(n%2!=0) cout<<v[(n/2)];
    return 0;
}
