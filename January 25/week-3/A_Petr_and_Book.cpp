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
    for (int i = 0; sum<n; i++)
    {
        
        if(i==7){
            i=0;
            ind=i;1
        }
        if(v[i]>0){
            sum+=v[i];
            ind++;
        };
        // cout<<"Ind : "<<ind<<"; Sum : "<<sum<<endl;
    };
    cout<<ind;
    
    return 0;
}