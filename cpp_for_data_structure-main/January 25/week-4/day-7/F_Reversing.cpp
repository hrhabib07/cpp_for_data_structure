#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    };
    int count=v.size()-1;
    while (count>=0)
    {
        cout<<v[count];
        if(count!=0){
            cout<<" ";
        }
        count--;
    }
    
    
    return 0;
}