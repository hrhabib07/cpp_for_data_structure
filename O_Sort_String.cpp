#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    int strIn[n];
    for (int i = 0; i <n; i++)
    {
        strIn[i] = int(s[i]);
    }
    sort(strIn, strIn+n);
    for (int i = 0; i <n; i++)
    {
        cout<<char(strIn[i]);
    }
    return 0;
}