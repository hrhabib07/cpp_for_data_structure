#include<stdio.h>
#include <stdlib.h>
int main(){
    int t; scanf("%d",&t);
    while (t--)
    {
        int n; scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        };
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=a[i];
        };
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i ; j++)
            {
                if(b[j]>b[j+1]) {
                    int temp = b[j];
                    b[j] = b[j+1];
                    b[j+1] = temp;
                }
            }
        }
        
        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = abs((a[i]-b[i]));
        }
        for (int i = 0; i < n; i++)
        {
            
            printf("%d ",c[i]);
        }
        printf("\n");
        
    }
    
    return 0;
}