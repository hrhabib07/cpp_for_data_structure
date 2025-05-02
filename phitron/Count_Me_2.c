#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    gets(s);
    int l= strlen(s);
    printf("%d",l);
    return 0;
}