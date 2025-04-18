#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    vector<int>fr(n,0);
    int ind =-1;
    for (int i = 0; i < n; i++)
    {
        if(fr[v[i]]>0) {ind=i;break;}
        else fr[v[i]]++;
    }
    
    cout<<ind;

    return 0;
}