// https://codeforces.com/problemset/problem/2050/D
#include<bits/stdc++.h>
using namespace std;

string maximizeNumber(string s) {
    int n = s.size();
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        arr[i] = s[i] - '0';
    }
    
    bool changed = true;

    while (changed) {
        changed = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] >= arr[i] + 2) {
                arr[i + 1]--;   
                swap(arr[i], arr[i + 1]);
                changed = true;
            }
        }
    }
    
    string result = "";
    for (int i = 0; i < n; i++) {
        result += (arr[i] + '0');
    }
    return result;
}


int main(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    
    for (int i = 0; i < n; i++) {
        s[i] = maximizeNumber(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
};
