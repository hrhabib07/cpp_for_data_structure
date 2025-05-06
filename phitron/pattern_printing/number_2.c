#include<stdio.h>
int main(){
    int n;  scanf("%d",&n);
    int space=n-1;
    int num=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = 1; j <= num; j++)
        {
            printf("%d",j);;
        }
        num++;
        printf("\n");
    }
    
    return 0;
}