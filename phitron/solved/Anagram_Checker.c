#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    char s[101],s1[101];
    scanf("%s %s",s,s1);
    int fr1[26]={0};
    int fr2[26]={0};
    for (int i = 0; i <strlen(s) ; i++)
    {
        int ind = s[i]-'a';
        fr1[ind]++;
    }
    for (int i = 0; i <strlen(s1) ; i++)
    {
        int ind = s1[i]-'a';
        fr2[ind]++;
    }
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if(fr1[i]!=fr2[i]) {flag=0;break;}
    }
    if(flag) printf("Yes");
    else printf("No");
    
    // printf("%s",s);
    return 0;
}