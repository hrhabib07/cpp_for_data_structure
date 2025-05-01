#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>res;
    for (int i = 0; i < n; i++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int diff = abs(b-a);
        if(diff>1 && diff%2==0){
           res.push_back("YES"); 
        } else{
            res.push_back("NO");
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<res[i]<<"\n";
    }
    return 0;
}