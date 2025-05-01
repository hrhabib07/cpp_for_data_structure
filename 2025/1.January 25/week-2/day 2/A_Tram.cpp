#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = 0;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        int entered = y-x;
        max+=entered;
        arr.push_back(max);
    };
    int res = *max_element(arr.begin(), arr.end());
    cout<<res;

    return 0;
}