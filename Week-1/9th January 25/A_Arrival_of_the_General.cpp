#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    };
    
    pair<int, int>max={0,a[0]};
    pair<int, int>min={0,a[0]};

    for (int i = 0; i < a.size(); i++)
    {
    //     if(a.size()==2 && a[0]<a[1]){
    //     break;
    // }
        if(a[i]>max.second){
            max.first=i;
            max.second=a[i];
        }
        if(a[i]<=min.second){
            min.first=i;
            min.second=a[i];
        }
    };
    int maxIndex = max.first;
    int minIndex = n-1-min.first;
    if(max.first>=min.first && max.second>=min.second){
        cout<<(maxIndex+minIndex-1);
    } else{
        cout<<maxIndex+minIndex;
    }
    return 0;
}