#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the number of elements: ";
    int n; cin>>n;
    cout<<endl;
    cout<<"Enter "<<n<<" elements: ";

    vector<int>v(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(v[i]<v[j]) swap(v[i],v[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
