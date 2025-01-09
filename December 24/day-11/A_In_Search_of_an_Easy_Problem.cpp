#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    };
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==1){
            res = 1;
            break;
        }
    };
    if(res==0){
        cout<<"EASY";
    } else{
        cout<<"HARD";
    }
    
    return 0;
}