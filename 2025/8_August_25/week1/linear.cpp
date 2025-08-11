#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the size of the vector : "<<endl;
    int n; cin>>n;
    cout<<"Enter the vector elements "<<endl;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the target element "<<endl;
    int target; cin>>target;
    int flag = 0;
    for (auto x:v)
    {
        if(target == x) {
            flag = 1; break;
        }
    }
    if(flag) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}
