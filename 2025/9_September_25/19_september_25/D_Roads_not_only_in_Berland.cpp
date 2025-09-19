#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

int find(int node){
    if(par[node] ==-1)
        return node;
    int leader = find(par[node]);
    par[node]= leader;
    return leader;
}

void dsu_union(int node1,int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1]>=group_size[leader2]){
        par[leader2] = leader1;
        group_size[leader1]+=group_size[leader2];
    } else{
        par[leader1] = leader2;
        group_size[leader2]+=group_size[leader1];
    }
}


int main() {
    
    int n; cin>>n;
    for (int i = 1; i <= n; i++)
    {
        par[i]=-1;
        group_size[i]=1;
    }
    vector<pair<int,int>>v;
   
    for (int i = 1; i < n; i++)
    {
        int a,b;cin>>a>>b;
        int leader1 = find(a);
        int leader2 = find(b);
        if(leader1==leader2){
            v.push_back({a,b});
        } else {
            dsu_union(a,b);
        }
    }
    vector<int>v2;
    vector<int> parns;
    int root;
    for (int i = 1; i <= n; i++)
    {
        if(group_size[i]!=1 && par[i]==-1){
            v2.push_back(i);
        }
        if(par[i]==-1 && group_size[i]==1) v2.push_back(i);
    }
    int nmb = v.size();
    cout<<nmb<<endl;
    int i = 0;
    while(nmb--){
        cout<<v[i].first<<" "<<v[i].second<<" "<<v2[i]<<" "<<v2[i+1]<<endl;
        i++;
    }
    
    return 0;
}
