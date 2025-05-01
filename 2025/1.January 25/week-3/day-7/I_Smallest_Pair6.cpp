#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>res;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        vector<int>inp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            inp.push_back(x);
        };
        int min1= *min_element(inp.begin(),inp.end());
        auto i1 = find(inp.begin(),inp.end(),min1);
        int firstMinInd = distance(inp.begin(),i1)+1;
        int minSum=INT_MAX;
        for (int k = 0; k < n; k++)
        {
            if(inp[k]+min1+k+1-firstMinInd<minSum && k!=*i1){
                minSum=inp[k]+min1+k+1-firstMinInd;
            }
        }
        res.push_back(minSum);  
    }
    
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }


    return 0;
}