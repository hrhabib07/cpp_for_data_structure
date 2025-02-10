#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,m; cin>>n>>m;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        };
        int con; cin>>con;
        int prev = v[0];
        int flag =0;
        for (int i = 1; i < n; i++)
        {
            if(v[i]>=prev){
                prev=v[i];
            } else{
                if(m-prev>=v[i]){
                    prev=v[i];
                    continue;
                } else{
                    flag=1;
                }
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        } else{
            cout<<"YES"<<endl;
        }
        
    
    }
    
    return 0;
}