#include <bits/stdc++.h>
using namespace std;

int par[100005];
int group_size[100005];
int cmp,mx;

int find(int a){
    if(par[a]==-1) return a;
    int leader = find(par[a]);
    par[a]=leader;
    return leader;
}

void dsu_union(int a,int b){
    int leaderA = find(a);
    int leaderB = find(b);
    if(leaderA == leaderB) return;
    if(group_size[leaderA]>group_size[leaderB]){
        group_size[leaderA] += group_size[leaderB];
        par[leaderB] = leaderA;
        mx = max(mx,group_size[leaderA]);
    } else{
        group_size[leaderB] += group_size[leaderA];
        par[leaderA] = leaderB;
        mx = max(mx,group_size[leaderB]);
    }
    cmp--;
}

int main() {
    int n,e; cin>>n>>e;
    cmp = n;
    mx = 1;
    for (int i = 0; i < n; i++)
    {
        par[i]=-1;
        group_size[i]=1;
    }
    
    while (e--)
    {
        int a,b; cin>>a>>b;
        dsu_union(a,b);
        cout<<cmp<<" "<<mx<<endl;
    }
    
    return 0;
}
