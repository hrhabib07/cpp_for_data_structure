#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>q;
    
    q.push(2);
    q.push(9);
    q.push(3);
    q.push(0);
    q.push(1);

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}