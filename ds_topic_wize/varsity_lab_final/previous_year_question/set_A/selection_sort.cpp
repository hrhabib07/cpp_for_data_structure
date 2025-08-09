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
        int curmin= i;
        for (int j = i+1; j < n; j++)
        {
            if(v[curmin]>v[j]) curmin=j;
        }
        if(curmin!=i){
            swap(v[i],v[curmin]);
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
