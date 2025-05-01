#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    };
    sort(v.begin(),v.end());
    int count = 0;
    int microCount = 0;
    for (int i = 0; i < n; i++)
    {
       int cur = v[i];
       if(cur==v[i+1]){
        microCount++;
       } else if(cur+1==v[i+1]){
        microCount++;
        count+=microCount;
        microCount=0;
       }else{
        microCount=0;
       }
    }
    cout<<count;
    
    return 0;
}