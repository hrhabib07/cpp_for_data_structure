#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        if(n==1){
                cout<<"YES"<<endl;
            } 
            else{
                int res = 1;
                int prev = v[0];
                int isDown = 1;
                for (int i = 1; i < n; i++)
                {
                    prev = v[i-1];
                    if(isDown && v[i]>prev) {
                        isDown = 0;
                    }else if(!isDown && v[i]<prev){
                        res = 0; break;
                    }
                }
                if(res) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            
        
        
    }
    
    return 0;
}