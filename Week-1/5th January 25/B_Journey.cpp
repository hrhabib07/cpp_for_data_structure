#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>tot;
    for (int i = 0; i < t; i++)
    {  
        vector<int>v;
        for (int j = 0; j < 4; j++)
        {
        int x;
        cin>>x;
        v.push_back(x);
        }
        int tar = v[0];
        int total = v[1]+v[2]+v[3];
        int firstPortion = ((tar/total)*3);
        int value = (tar/total);
        int result = 0;
        if(tar%total==0){
            result = ((tar/total)*3);
        } else{
            if((value*total)+v[1]>=v[0]){
                result=firstPortion+1;
            } else if((value*total)+v[1]+v[2]>=v[0]){
                result=firstPortion+2;
            } else if((value*total)+v[1]+v[2]+v[3]>=v[0]){
                result=firstPortion+3;
            }
        }
        tot.push_back(result);
    }
    for (int i = 0; i < tot.size(); i++)
    {
        cout<<tot[i]<<endl;
    }
    
     
    
    return 0;
}