#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    int size = v.size();
    // cout<<"size: "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(222);
    cout<<endl;
}

int main(){
    vector<int> myNumb;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        // printVec(myNumb);
        myNumb.push_back(x);
    }
    printVec(myNumb);

    vector<int> v2 = myNumb; // O(n)
    printVec(v2);

    return 0;
}