#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    };
    vector<int>r(q);
    for (int i = 0; i < q; i++)
    {
        int a,b;cin>>a>>b;
        int sum = 0;
        a--;b--;
        for (int i = a; i <=b; i++)
        {
            sum+=v[i];
        }
        r[i]=sum;
    }
    for (int x:r)
    {
        cout<<x<<endl;
    }
    
    return 0;
}