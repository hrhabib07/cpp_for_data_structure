#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int star = 1;
    int space = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*space ; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = 0; j < star ; j++)
        {
            printf("* ");
        }
        star++;
        printf("\n");
    }
    
    return 0;
}