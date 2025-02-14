#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int max;
    int min;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(i==0){
            min = x;
            max = x;
        } else{
            if(x>max){
                sum++;
                max = x;
            } else if(x<min){
                sum++;
                min = x;
            }
        }
    }
    cout<<sum;
    return 0;
}