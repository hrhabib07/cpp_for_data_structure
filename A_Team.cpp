#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total = 0;
    for (int j = 0; j < n; j++)
    {
        int prob[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>prob[i];
        };
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum+=prob[i];
        };
        if (sum>=2) total++;
    }
   
   cout<<total;
    
    return 0;
}