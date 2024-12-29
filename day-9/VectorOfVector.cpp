#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    int sz = v.size();
    cout<<"size: "<<sz<<endl;
    for (int i = 0; i < sz; i++)
    {
        cout<<v[i]<<" " ;
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        v.push_back(vector<int>());
        int n;
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    
    
    return 0;
}