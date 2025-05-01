#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string result = "NO";
        string s;
        cin>>s;
        int comb = 0;
        vector<int> pos;
        for (int j = 0; j < s.size(); j++)
        {
            int num = s[j]-'0';
            if(num<4 && num>1){
                comb++;
                pos.push_back(j);
            };
        };
        for (int k = 0; k < comb; k++)
        {
            string converted = s;
            int number = converted[k]-'0';
            number = number*number;
            converted[k] = number+'0';
            int check = stoi(converted);
            if(check%9==0){
                result="YES";
                break;
            }
        }
        v.push_back(result);
    };
    for (string res: v)
    {
        cout<<res<<endl;
    }
    return 0;
}