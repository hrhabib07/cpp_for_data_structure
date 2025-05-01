#include<stdio.h>
int main(){
    char str[100000];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {

        int st=str[i];
        if(st>=97) str[i]= str[i]-32;
        else if(st>=65) str[i]= str[i]+32;
        else str[i]=' ';
    }
    printf("%s",str);
    return 0;
}