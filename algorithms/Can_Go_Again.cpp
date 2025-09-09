#include <bits/stdc++.h>
using namespace std;

class Edge {
    public:
    long long a;
    long long b; 
    long long c;
    Edge(long long a,long long b, long long c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

long long dist[1005];

int main() {
    long long n,e; cin>>n>>e;
    vector<Edge> edge_list;
    while (e--)
    {
        long long a,b;
        long long c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));
    }
    
    long long s; cin>>s;

    for (long long i = 1; i <= n; i++)
        dist[i]=LLONG_MAX;
    dist[s]= 0;
    long long t; cin>>t;
    
    for (long long i = 1; i <= n-1; i++)
    {
        for (auto ed:edge_list)
            {
                long long  a,b,c;
                a = ed.a;
                b = ed.b;
                c = ed.c;

                if(dist[a]!=LLONG_MAX && dist[a]+c < dist[b] )
                    dist[b] = dist[a]+c; 
            }
    }
    long long cycle = 0; 

        for (auto ed:edge_list)
            {
                long long a,b,c;
                a = ed.a;
                b = ed.b;
                c = ed.c;

                if(dist[a]!=LLONG_MAX && dist[a]+c < dist[b] )
                    cycle =1; 
            }

    if(!cycle){
            while (t--)
            {
                long long q; cin>>q;
                if(dist[q]!=LLONG_MAX){
                    cout<<dist[q]<<endl;
                } else{
                    cout<<"Not Possible"<<endl;
                }
            }
    } else{
        while (t--)
            {
                long long q; cin>>q;
            }
        cout<<"Negative Cycle Detected"<<endl;
    }

    
    
    
    return 0;
}
