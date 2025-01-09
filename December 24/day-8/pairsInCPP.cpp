#include<bits/stdc++.h>
using namespace std;
int main(){
    // How to declare a pair?
    // pair<int, string> p;
    // p.first = 19;
    // p.second= "Habib";
    // cout<<"Roll: "<<p.first<<" ; Name: "<<p.second<<endl;
    
    // when we use pairs? to maintain relationships between arrays
    pair<int,int> arr[3];
    arr[0]= {2,4};
    arr[1]= {3,6};
    arr[2]= {1,1};
    swap(arr[0], arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first <<" "<<arr[i].second<<endl;
    }
    
    
    return 0;
}