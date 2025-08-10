#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int flag = 0;
    int t; cin>>t;
    // binary search 
    sort(a.begin(),a.end());
    int low = 0, high = n-1,mid;
    while (low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==t) {flag = 1; break;}
        else if(a[mid]>t) high = mid-1;
        else low = mid+1;
    }
    if(flag)cout<<"Found!"<<endl;
    else cout<<"Not found!"<<endl;


    return 0;
}
