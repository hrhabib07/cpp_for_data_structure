#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>res;
    for (int i = 0; i < n; i++)
    {
        vector<int>t;
        int n,a,b;
        cin>>n>>a>>b;
        if(a>b && a!=n){
            res.push_back("YES");
        } else{
            res.push_back("NO");
        }
    }
    
    return 0;
}