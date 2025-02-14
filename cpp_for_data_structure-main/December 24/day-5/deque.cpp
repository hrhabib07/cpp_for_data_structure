#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.push_front(5);
    for (int d : dq)
    {
        cout<<d<<" ";
    }
    cout<<endl;
    
    return 0;
}