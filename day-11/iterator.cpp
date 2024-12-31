#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={4,5,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();
    cout<<(*it+2)<<endl;
    return 0;
}