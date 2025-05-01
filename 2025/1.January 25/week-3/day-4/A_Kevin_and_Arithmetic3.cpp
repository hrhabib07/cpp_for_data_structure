#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>res;
    for (int k = 0; k < t; k++)
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
        int even=0;
        for (int i = 0; i < n; i++)
        {
            int first = inp[i];
            if(first%2==0){
                int temp=inp[0];
                inp[0]=inp[i];
                inp[i]=temp;
                break;
            }
        };
        if(inp[0]%2!=0){
            res.push_back(0);
            break;
        } else{
        int s=0;
        int p=0;
        for (int i = 0; i < n; i++)
        {
            if(i!=0 && inp[i]%2==0){
                continue;
            }  else{
                p++;
               s+=inp[i];
                int odd=s/2;
                if(odd%2==0){
                    while(odd%2==0){
                        odd=odd/2;
                    };
                }; 
                s=odd;
            }
        };
        res.push_back(p);
        }
        
//         int s=0;
//         int p=0;
//         if(inp[0]%2!=0){
//             res.push_back(0);
//             break;
//         } else if (s==0){
//             int first = inp[0];
//             int newN=first/2;
//             while (newN%2==0)
//             {
//                 newN=newN/2;
//             };
//             s+=newN;
//             inp.erase(inp.begin());
//         } else{
//             while (inp.size()>0)
//             {
//                 if(inp[0]%2==0){
//                     inp.erase(inp.begin());
//                 } else{
//                     p++;
//                     s+=inp[0];
//                     int newN=s/2;
//                     while (newN%2==0){
//                      newN=newN/2;
//                     }
//             s=newN;
//             inp.erase(inp.begin());
//     }
//  } 
//             res.push_back(p);
//         }
    };
    for (int i = 0; i < t; i++)
    {
        cout<<res[i]<<endl;
    }
    
    
    return 0;
}