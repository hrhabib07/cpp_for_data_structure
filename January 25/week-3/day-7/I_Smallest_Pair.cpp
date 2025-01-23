#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>r;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        };
        int cur=INT_MAX;
        pair<int,int>p;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
            // cout<<v[i]<<" "<<v[j]<<endl;
            if(v[i]+v[j]<cur && i!=j){
                cur=v[i]+v[j];
                p.first=j+1;
                p.second=i+1;
            }
            };
        }
        r.push_back(cur+p.first-p.second);
    };
    for (int i = 0; i < t; i++)
    {
        cout<<r[i]<<endl;
    }
    
    
    return 0;
}