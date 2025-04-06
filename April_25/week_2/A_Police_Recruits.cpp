#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int p=0,c=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(x>0)p+=x;
        else if(!p && x<0) c++;
        else if(p && x<0) p--;
    }
    cout<<c;
    return 0;
}
