#include<stdio.h>
#include<string.h>
int main(){
    char str[10001];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    int count[26]={0};
    for (int i = 0; i < len; i++)
    {
        int c = str[i]-'a';
        count[c]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(count[i]){
            char c = i+'a';
            printf("%c - %d\n",c, count[i]);
        }
    }
    
    return 0;
}