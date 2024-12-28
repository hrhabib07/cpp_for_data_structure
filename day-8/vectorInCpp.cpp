#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    int size = v.size();
    cout<<"size: "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main(){
    vector<int> myNumb;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        myNumb.push_back(i);
    }
    printVec(myNumb);
    return 0;
}