#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int result[t];
    for (int m = 0; m < t; m++)
    {
    int days;
    cin>>days;
    int monProb[days];
    int setProb[days];
    for (int j = 0; j < days; j++)
    {
        cin>>monProb[j];
    }
    for (int j = 0; j < days; j++)
    {
        cin>>setProb[j];
    }
    int monTotal = 0;
    int setTotal = 0;
    for (int i = 0; i < days; i++)
    {
       
     int monSel[days];
    for (int i = 0; i < days; i++)
    {
        if(monProb[i]>setProb[i+1]){
            monSel[i]=i;
        } else{
            monSel[i]=0;
        }
        
    };
    for (int i = 0; i < days; i++)
    {
        if(monSel[i]!=0 && i<days){
            setTotal+=setProb[i+1];
        }
    }
    
    
    for (int i = 0; i < days; i++)
    {
        monTotal+=monSel[i];   
    };


    };
    int differences = monTotal-setTotal;
    result[m]=differences;
    }
    for (int i = 0; i < t; i++)
    {
        cout<<result[i]<<endl;
    }
    

    return 0;
}