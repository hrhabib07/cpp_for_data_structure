// https://codeforces.com/problemset/problem/2050/D
#include<bits/stdc++.h>
using namespace std;

string fun(string gStr){
    int sz = gStr.size();
    int myArr[sz];
    myArr[sz]=0;
    for (int i = 0; i < sz; i++)
    {
        myArr[i] = gStr[i]-'0';
    };
    for (int i = sz; i > 0; i--)
    {
        for (int j = 0; j < sz; j++)
        {
            if(myArr[j]+1<myArr[j+1]){
                int val = myArr[j+1];
                if(val>1){
                    val--;
                } 
                char temp = val;
                myArr[j+1] = myArr[j];
                myArr[j] = temp;
                if(j=0){
                    i++;
                }
            }
        } 
    }
    for (int i = 0; i < sz; i++)
    {
        gStr[i] = myArr[i]+'0';
    }    
    return gStr;
}


int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = fun(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
};
