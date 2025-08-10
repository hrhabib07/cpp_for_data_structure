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
        for (int j = 0; j < n-i-1; j++)
        {
            if(v[j+1]<v[j]) swap(v[j+1],v[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
