#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v){
    int sz = v.size();
    cout<<"Size : "<<sz<<endl;
    for (int i = 0; i < sz; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){
    // vector <pair<int, int>> v ={{2,4},{3,6},{4,8}};    
    vector <pair<int, int>> v;    
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        // v.push_back({x,y});
    }
    // printVec(v);
    printVec(v);
    return 0;
}