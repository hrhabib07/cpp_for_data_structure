#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    };
    int min = v[0];
    for (int i = 0; i < n; i++)
    {
        if(min>v[i]){
            min=v[i];
        }
    };
    int minCount = 0;
    int minInd;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==min){
            minCount++;
            minInd=i+1;
        }
    }
    if(minCount==1){
        cout<<minInd;
    } else{
        cout<<"Still Rozdil";
    }
    
    return 0;
}