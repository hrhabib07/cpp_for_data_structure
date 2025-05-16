#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int space = n;
    for (int i =1; i < n; i++)
    {
        space--;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        
       for (int j = 0; j < 2*i-1; j++)
       {
        if(i%2==0) printf("-");
        else printf("#");
       }
       printf("\n");
    }
    space=0;
    for (int i =n; i >=1; i--)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space++;
        
       for (int j = 0; j < 2*i-1; j++)
       {
        if(i%2==0) printf("-");
        else printf("#");
       }
       printf("\n");
    }
    
    return 0;
}