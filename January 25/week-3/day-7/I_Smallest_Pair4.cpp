#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int res[t];
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        int inp[n];
        for (int i = 0; i < n; i++)
        {
            cin>>inp[i];
        };
        int min = *min_element(inp,inp+n);
        int val = min;
        auto ind1= find(inp,inp+n,val);
        cout<<min<<endl;
        cout<<distance(inp, ind1);;

        
    }
    
    return 0;
}