#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin>>p.first>>p.second;
        cout<<p.second-p.first<<endl;
    }
    
    return 0;
}