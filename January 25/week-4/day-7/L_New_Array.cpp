#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    };
    vector<int>v3(v2);
    for (int i = 0; i < n; i++)
    {
        int x=v1[i];
        v3.push_back(x);
    }
    for (int i = 0; i < v3.size(); i++)
    {
        cout<<v3[i];
        if(i!=v3.size()-1){
            cout<<" ";
        }
    }
        
    return 0;
}