#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int star = n;
    for (int i = star; i >0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}