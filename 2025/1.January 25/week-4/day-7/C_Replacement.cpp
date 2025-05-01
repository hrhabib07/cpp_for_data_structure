#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x>0){
            x=1;
        } else if(x<0){
            x=2;
        }
        v[i]=x;
    }
    int i=0;
    while (n--)
    {
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<" ";
        }
        i++;
    }
    
    return 0;
}