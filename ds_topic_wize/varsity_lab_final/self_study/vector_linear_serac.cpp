#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int>a(n); // int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int t; cin>>t;
    int found =0;
    // binary search 
    stable_sort(a.begin(),a.end());
    int l=0,h=n-1,mid;
    while (l<=h)
    {
        mid = (l+h)/2;
        if(a[mid]==t){ found =1;break;} 
        else if(a[mid]>t) h= mid-1;
        else l= mid+1;
    }
    if(found) cout<<"Found"<<endl;
    else cout<<"NOT found."<<endl;
    
    return 0;
}
