#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>v;
    vector<long long int>p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(i==0){
            p.push_back(x);
        } else{
            long long int pre = p[(i-1)]+x;
            p.push_back(pre);
        }
    };
    for (int i = 0; i < q; i++)
    {
        int l,r; cin>>l>>r;
        l--; r--;
        long long int sum;
        if (l==0) sum=p[r]-0; 
        else sum = p[r]-p[l-1];
        cout<<sum<<endl;
    }
    
    
    return 0;
}