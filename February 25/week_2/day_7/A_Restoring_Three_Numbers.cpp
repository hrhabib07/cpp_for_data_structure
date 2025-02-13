#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(4);
    for (int i = 0; i < 4; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int x1=v[0],x2=v[1],x3=v[2],x4=v[3];
    int a = x4-x3;
    int b = x4-x2;
    int c = x4-x1;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}