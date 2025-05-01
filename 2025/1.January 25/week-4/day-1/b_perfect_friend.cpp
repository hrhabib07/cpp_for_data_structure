#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>res;
    for (int i = 0; i < t; i++)
    {
        vector<int>v;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v[0]==v[1]+v[2]){
            res.push_back(1);
        } else if(v[1]==v[0]+v[2]){
            res.push_back(1);
        }else if(v[2]==v[0]+v[1]){
            res.push_back(1);
        } else{
            res.push_back(0);
        }
    }
    for (int i = 0; i < t; i++)
    {
        int r=res[i];
        if(r==1){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}