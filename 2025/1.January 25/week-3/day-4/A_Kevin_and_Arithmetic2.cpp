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
        for (int j= 0; j < n; j++)
        {
            int x;
            cin>>x;
            inp.push_back(x);
        };
        int sum = 0;
        int points = 0;
        int counter = 0;
        int counter2 = 0;
        int sz = inp.size();
        while (inp.size()>0)
        {
             {
            int firstItem = inp[0];
            if(sum==0 && firstItem%2!=0){
                counter2++;
                if(counter2<n){
                    inp.push_back(firstItem);
                    inp.erase(inp.begin());
                    } else{
                    inp.erase(inp.begin());
                    }
            } else{
                if(firstItem%2==0 && sum==0){
                    points++;
                    int newItem=firstItem/2;
                    while(newItem%2==0){
                        newItem=newItem/2;
                    }
                    sum+=newItem;
                    inp.erase(inp.begin());  
                } else if (firstItem%2==0 && sum%2!=0){
                    counter++;
                    if(counter<n){
                    inp.push_back(firstItem);
                    inp.erase(inp.begin());
                    } else{
                    inp.erase(inp.begin());
                    }
                } else if (firstItem%2!=0 && sum%2!=0){
                    sum+=firstItem;
                    points++;
                    int newItem=sum/2;
                    while(newItem%2==0){
                        newItem=newItem/2;
                    };
                    sum=newItem;
                    inp.erase(inp.begin());
                } else if(firstItem%2==0 && sum%2!=0){
                    inp.erase(inp.begin());
                }
            }
        }  
        }  
        res.push_back(points);
    }
    for (int i = 0; i < t; i++)
    {
        cout<<res[i]<<endl;
    }  
    return 0;
}