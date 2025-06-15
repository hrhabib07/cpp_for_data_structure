#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    vector<int>v(5,0);
    for(char c:s){
        if(c=='E'|| c=='e') v[0]++;
        else if(c=='G'|| c=='g') v[1]++;
        else if(c=='Y'|| c=='y') v[2]++;
        else if(c=='P'|| c=='p') v[3]++;
        else if(c=='T'|| c=='t') v[4]++;
    };
    sort(v.begin(),v.end());
    cout<<v[0];
    
    return 0;
}
