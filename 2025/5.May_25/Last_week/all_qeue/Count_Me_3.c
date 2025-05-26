#include<stdio.h>
#include<string.h>
int main(){
    int t; scanf("%d",&t); getchar();
    while (t--)
    {
        char str[10000];
        fgets(str, sizeof(str), stdin);
        int s=0,c=0,d=0;
        int l = strlen(str);
        for (int i = 0; i < l; i++)
        {
            char ch=str[i];
            if(ch>='a' && ch<='z') s++;
            else if(ch>='A' && ch<='Z') c++;
            else if(ch>='0' && ch<='9') d++;
        }
        printf("%d %d %d\n", c,s,d);
        
    }
    
    return 0;
}