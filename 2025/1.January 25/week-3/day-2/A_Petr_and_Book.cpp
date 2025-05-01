#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < 7; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    };
    int sum = 0;
    int ind = 0;
    while (sum<n)
    {
        if(ind==7){
            ind=0;
        };
        sum+=v[ind];
        ind++;
    }
    cout<<ind;
    
    return 0;
}