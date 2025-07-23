#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>l;
    int x; 
    while(cin>>x){
        if(x==-1) break;
        else{
            l.push_back(x);
        }
    }
    l.sort();
    l.unique();
    for(int y: l){
        cout<<y<<" ";
    }    
    return 0;
}
