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

    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int key = v[i];
        while(j>=0 && key<v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1]=key;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
