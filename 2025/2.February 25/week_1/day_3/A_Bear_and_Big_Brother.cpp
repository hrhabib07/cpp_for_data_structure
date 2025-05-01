#include<bits/stdc++.h>
using namespace std;
int main(){
    int a; int b; cin>>a>>b;
    int count =0;
    while (a<=b)
    {
        count++;
        a*=3; b*=2;
    };
    cout<<count;
    
    return 0;
}