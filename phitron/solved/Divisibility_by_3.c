#include<stdio.h>
int main(){
    int d;
    char s[1000001];
    scanf("%d",&d);
    scanf("%s",&s);
    int sum =0;
    for (int i = 0; i < d; i++)
    {
        sum+= s[i]-'0';
    }
    
    // printf("%d",sum);
    if(sum%3==0) printf("YES");
    else printf("NO");
    
    return 0;
}