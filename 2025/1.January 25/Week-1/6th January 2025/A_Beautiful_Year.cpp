#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
    int nextNumber = y+1;
    restart_loop: 
    string sy=to_string(nextNumber);
    for (int i = 0; i < 3; i++)
    {
        char a=sy[0],b=sy[1],c=sy[2],d=sy[3];
        if(c==d){
            nextNumber++;
            goto restart_loop; 
        } else if(b==c){
            nextNumber++;
            goto restart_loop;
        } else if(b==d){
            nextNumber++;
            goto restart_loop;
        }else if(a==b){
            nextNumber++;
            goto restart_loop;
        }else if(a==c){
            nextNumber++;
            goto restart_loop;
        }else if(a==d){
            nextNumber++;
            goto restart_loop;
        }
    }
    cout<<nextNumber;
    return 0;
}