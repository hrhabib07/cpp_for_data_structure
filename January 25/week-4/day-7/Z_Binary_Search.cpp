#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    };
    sort(v.begin(),v.end());
    for (int i = 0; i < q; i++)
    {
        int x; cin>>x;
        int l=0;
        int h=n;
        string r="not found";
        while (h>l)
        {
        int mid = (l+h)/2;
            if(v[mid]==x){
                r="found";
                break;
            } else if (v[mid]>x){
                h=mid-1;
            } else if(v[mid]<x){
                l=mid+1;
            }
        }
       cout<<r<<endl; 
    }
    
    
    return 0;
}