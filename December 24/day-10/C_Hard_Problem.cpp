#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> res;
    for (int i = 0; i < t; i++)
    {
        int total = 0;
        vector<int> v;
        for (int j = 0; j <4 ; j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        };
        int remSeat = 0;
        int remC = v[3];
        int rowA = v[1];
        int rowB = v[2];
        int rowC = v[3];
        if(rowA<=v[0]){
            total+=rowA; 
            remSeat = v[0]-v[1];
            if(remSeat>=1 && remC<= remSeat){
                total += remC;
                remC = 0;
            }
            if(remSeat>=1 && remC>remSeat){
                total += remSeat;
                remC -=remSeat;
            }
        }
        if(rowA>v[0]){
            total+=v[0]; 
        }
        if(rowB<=v[0]){
            total+=rowB; 
            remSeat = v[0]-v[2];
            if(remSeat>=1 && remC<=remSeat){
                total += remC;
                remC = 0;
            }
            if(remSeat>=1 && remC>remSeat){
                total += remSeat;
                remC -=remSeat;
            }
        }
        if(rowB>v[0]){
            total+=v[0]; 
        }
        res.push_back(total);
    };

    for (int i = 0; i < t; i++)
    {
       cout<<res[i]<<endl;
    }
    
    
    return 0;
}