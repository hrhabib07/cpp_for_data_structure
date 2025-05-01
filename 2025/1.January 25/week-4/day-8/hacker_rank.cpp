#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n; bool flag = true;
        vector<int>v;
        for(int i = 0; i<n; i++){
            int x; cin>>x;
        if(i==0) v.push_back(x);
            else{
                int previous = v[i-1];
                if(previous>x){
                    flag=false;
                }
                v.push_back(x);
        };
        };
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
