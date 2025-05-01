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
        // sort(inp.begin(),inp.end());
        int min1= *min_element(inp.begin(),inp.end());
        auto i1 = find(inp.begin(),inp.end(),min1);
        int firstMinInd = *i1+1;
        remove(inp.begin(), inp.end(), min1); 
        int min2= *min_element(inp.begin(),inp.end());
        auto i2 = find(inp.begin(),inp.end(),min2);
        // cout<<inp.size()<<endl;
        int secondMinInd = *i2+1;
        cout<<min1<<" "<<min2<<" "<<firstMinInd<<" "<<secondMinInd<<endl;
        res.push_back(min1+min2+secondMinInd-firstMinInd);  
        // cout<<*i1;
    }
    
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }


    return 0;
}