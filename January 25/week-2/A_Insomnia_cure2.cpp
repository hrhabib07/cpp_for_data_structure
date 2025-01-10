#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>d;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
        
    }
    
    int sum = 0;
    int i =0;
    int mult = 1;
    while (sum<d && mult<=d && i<4)
    {
        if(a[i]!=a[i-1]){
            mult*=a[i];
            sum+=d/mult;
        } 
        else{
            
        }
        i++;
    }
    cout<<sum;
    return 0;
}