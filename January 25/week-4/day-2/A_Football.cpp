#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string team1="s1";
    int scoreTeam1=0;
    string team2="s2";
    int scoreTeam2=0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(team1=="s1"){
            team1=s;
            scoreTeam1++;
        } else if(team2=="s2" && team1!="s1" && s!=team1){
            team2=s;
            scoreTeam2++;
        } else{
            if(s==team1){
                scoreTeam1++;
            } else if (s==team2){
                scoreTeam2++;
            }
        }
    }
    // cout<<team1<<" "<<scoreTeam1<<endl;
    // cout<<team2<<" "<<scoreTeam2<<endl;
    if(scoreTeam1>scoreTeam2){
        cout<<team1;
    } else {
        cout<<team2;
    }
    return 0;
}