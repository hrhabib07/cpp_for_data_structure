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
    map<int,int>mp;
   for (int i = 0; i < n-1; i++)
   {
    int diff = abs(v[(i+1)]-v[i]);
    mp.insert({diff,i+1});
   };
    mp.insert({abs(v[n-1]-v[0]),n+1});
    int result = mp.begin()->second;
if(result!=n+1){
    cout<<mp.begin()->second<<" "<<mp.begin()->second+1; 
} else{
    cout<<n<<" "<<1; 
}     
    return 0;
}