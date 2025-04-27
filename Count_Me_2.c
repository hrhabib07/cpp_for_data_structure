#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    gets(s);
    int l = strlen(s);
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        char ch = s[i];
        if(ch=='a'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='e') continue;
        else count++;
    }
    printf("%d",count);
    return 0;
}