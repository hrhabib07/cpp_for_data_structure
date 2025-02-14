#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>res;
    for (int i = 0; i < t; i++)
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
        sort(v.begin(),v.end());
        int min=v[0];
        int minDiff=v[1]-v[0];
        if(min<n){
            res.push_back(0);
        } else if(min>=n && minDiff>=(n-1) && min!=2){
            if(minDiff>=(n-1)){
                res.push_back(1);
            }
        } else if (min>=2*n)
        {
            res.push_back(1);
        } else if(min>(2*(n-1))){
            res.push_back(1);
        }  else{
            res.push_back(0);
        }
    }
    for (int i = 0; i < t; i++)
    {
        int r=res[i];
        if(r==0){
            cout<<"NO"<<endl;
        } else if(r==1){
            cout<<"YES"<<endl;
        }
        // cout<<res[i]<<endl;
    }
    
    
    return 0;
}