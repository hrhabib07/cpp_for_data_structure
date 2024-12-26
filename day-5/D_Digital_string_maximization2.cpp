#include<bits/stdc++.h>
using namespace std;

string fun(string first){
    for (int i = 0; i < first.size(); i++)
    { 
        if(first[i]-'0'>1){
            int val = first[i]-'0'-1;
            first.at(i) = char(val+'0');
            char temp = first[i-1];
            first[i-1] = first[i];
            first[i] = temp;
        }
    }
    return first;
}

int main(){
    string givenString = "1191";
    int point = 0;
    
    int i=givenString.size();
    while (givenString[i]-'0'>givenString[i-1]-'0')
    {
        givenString=fun(givenString);
        i=givenString.size();
    }
    
    // cout <<my<< endl;
    for (int i = 0; i < givenString.size(); i++)
        {
            if(givenString[i]-'0'<givenString[i+1]-'0'){
                givenString=fun(givenString);
        }
        }
        
    cout <<givenString << endl;


    return 0;
}