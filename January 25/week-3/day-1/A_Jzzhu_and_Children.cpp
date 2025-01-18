#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push({x,i+1});
    };
    while (q.size()>1)
    {
        int first =q.front().first;
        // cout<<"First: "<<q.front().first<<" Second: "<<q.front().second<<endl;
        if(first<=m){
            q.pop();
        } else{
            int second = q.front().second;
            q.push({first-m,second});
            q.pop();
        }
    }
    cout<<q.front().second<<" ";
    return 0;
}