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
    cout<<endl;
    for ( it = v.begin(); it!= v.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    

    vector<pair<int, int>> v_p = {{2,4}, {3,6}, {4,8}};
    vector<pair<int,int>>:: iterator it2;
    for (it2 = v_p.begin(); it2 != v_p.end(); ++it2)
    {
        // cout << it2->first << " " << it2->second << endl;
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
    }
    
    return 0;
}