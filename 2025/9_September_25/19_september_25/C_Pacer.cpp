#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        long long cnt = m;
        bool flag = false;
        while (n--)
        {
            int a,b; cin>>a>>b;
            if(!flag){
                if(a%2==0 && b !=0) {cnt--;flag = true;}
                else if(a%2!=0 && b !=1) {cnt--;flag = true;}
            } 
            else if(flag){
                if(a%2==0 && b !=1) {cnt--;flag = false;}
                else if(a%2!=0 && b !=0) {cnt--;flag = false;}
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
