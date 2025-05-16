#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int space=n;
    for (int i = 1; i <= n; i++)
    {
        space--;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = i; j>0 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
    return 0;
}