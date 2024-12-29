#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v;
    for (int i = 0; i < 5; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    pair<int,int>l;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(v[i][j]==1){
               l.first=i;
               l.second=j; 
            }
            // cout<<v[i][j]<<" ";
        }
        // cout<<endl;
    }
    int firstI = l.first;
    int secondI = l.second;
    int sum = abs(firstI-2) + abs(secondI-2);
    cout<<sum;
    return 0;
}