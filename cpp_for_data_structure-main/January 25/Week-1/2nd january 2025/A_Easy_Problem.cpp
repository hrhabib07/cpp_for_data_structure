#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    };
    for (int i = 0; i < t; i++)
    {
        cout<<v[i] - 1<<endl;
    };
    return 0;
}