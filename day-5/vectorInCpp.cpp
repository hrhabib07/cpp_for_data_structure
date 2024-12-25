#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vec;
    
    
    for (int i = 1; i <= 10; i++)
    {
        vec.push_back(i);
    }
    cout<<"First element of the vector "<<vec.front()<<endl;
    cout<<"Last element of the vector "<<vec.back()<<endl;
    // vec.push_back('1');
    cout<<"Size : "<<vec.size()<<endl;
    for (int i : vec)
    {
       cout<<i<<" ";
    }
    vec.pop_back();
    cout<<endl<<endl<<"Pop back implemented: "<<endl;
    cout<<"First element of the vector "<<vec.front()<<endl;
    cout<<"Last element of the vector "<<vec.back()<<endl;
    cout<<"Size : "<<vec.size()<<endl;
    for (int i : vec)
    {
       cout<<i<<" ";
    }
    return 0;
}