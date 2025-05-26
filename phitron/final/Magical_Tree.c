#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int top = 6+(n/2);
    int space = top-1;
    for (int i = 1; i <= top; i++)
    {
        for (int j = 0; j < space;j++)
        {
            printf(" ");
        };
        space--;
        for (int j = 0; j < (2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    space=top-(n/2)-1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < space;j++)
        {
            printf(" ");
        };
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}