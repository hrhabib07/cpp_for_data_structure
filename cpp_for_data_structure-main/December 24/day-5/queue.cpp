#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q; // descending order
    // priority_queue<int,vector<int>, greater<int>>q; // ascending order 
    
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}