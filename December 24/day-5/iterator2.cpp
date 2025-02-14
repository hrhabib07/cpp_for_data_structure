#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> seq ={1,2,3,4,5};
    for (auto it= seq.rbegin(); it != seq.rend(); it++)
    {
        cout<<*(it)<<" ";
    }
    
    return 0;
}
    // how this work ?

    // version : 1
    // vector <int>::reverse_iterator it;
    // for (it = seq.rbegin(); it != seq.rend(); it++)
    // {
    //     cout<<*(it)<<" ";
    // }
    


     // version : 2
    // for (vector<int>::reverse_iterator it= seq.rbegin(); it != seq.rend(); it++)
    // {
    //     cout<<*(it)<<" ";
    // }



    // version : 1
    // for (auto it= seq.rbegin(); it != seq.rend(); it++)
    // {
    //     cout<<*(it)<<" ";
    // }