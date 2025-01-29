#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=n;
    vector<int>v;
    while (t--)
    {
        int x;
        cin>>x;
        v.push_back(x%2);
    } 
    int first=v[0];
    int ind=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=first){
            ind=i+1;
            break;
        }
    }
    if(ind==2){
        int first =v[0];
        int second = v[1];
        int third = v[2];
        if(first==third){
            cout<<2;
        } else if(second==third){
            cout<<1;
        }
    } else{
        cout<<ind;
    }
    
    return 0;
}