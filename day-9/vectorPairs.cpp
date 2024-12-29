#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v){
    int sz = v.size();
    for (int i = 0; i < sz; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main(){
    vector <pair<int, int>> v ={{2,4},{3,6},{4,8}};    
    printVec(v);
    return 0;
}