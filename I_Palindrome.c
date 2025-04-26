#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    gets(str);
    int size = strlen(str);
    int s=0,e=size-1,flag=1;
    while (s<e)
    {
        if(str[s]!=str[e]) {
            flag =0; 
            break;
        } 
        s++;
        e--;
    }
    if(flag) printf("YES");
    else printf("NO"); 
    return 0;
}