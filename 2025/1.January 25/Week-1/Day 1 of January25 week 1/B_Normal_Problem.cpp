#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> v;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
        vector <string> v_c;

    for (auto s : v)
    {
        int inital = 0;
        int sz = s.size();
        int mid = sz-1;
        while(mid>=inital){
            char temp = s[inital];
            char temp2 = s[mid];
            if(temp == 'p'){
                temp = 'q';
            } else if(temp == 'q'){
                temp = 'p';
            };
            if(temp2 == 'p'){
                temp2 = 'q';
            } else if(temp2 == 'q'){
                temp2 = 'p';
            };
            s[inital]= temp2;
            s[mid] = temp;

            inital++;
            mid--;
        }
        cout<<s<<endl;
    }
    return 0;
}