#include<stdio.h>

int is_palindrome(char s[]){
    int flag = 1;
    int len = strlen(s);
    for (int i = 0; i < (len/2); i++)
    {
        if(s[i]!=s[len-1-i]) {flag=0; break;}
    }
    if(flag) return 1;
    else return 0;
}

int main(){
    char s[1001];
    scanf("%s",&s);
    int res = is_palindrome(s);
    if(res) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}