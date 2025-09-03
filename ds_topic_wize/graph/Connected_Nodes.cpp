#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e; cin>>n>>e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a,b; cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q; cin>>q;
    while (q--)
    {
        int a; cin>>a;
        vector<int> v = adj_list[a];
        int sz = v.size();
        if(sz>0){
            sort(v.rbegin(),v.rend());
            for(auto x: v){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    
    
    return 0;
}
