#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n = 7;
    // int a[n]={3,-4,5,4,-1,6,-8};
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    vector<int>v;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            int sum=0;
            for (int i = st; i <=end; i++)
            {
                sum+=a[i];
            }
            v.push_back(sum);
        }
    };
    cout<<*max_element(v.begin(),v.end());
    return 0;
}