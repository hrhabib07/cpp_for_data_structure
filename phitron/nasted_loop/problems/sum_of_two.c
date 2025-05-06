#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int k; scanf("%d",&k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >0 ; j--)
        {
            if(a[i]+a[j]==k && i!=j){
                // printf()
                printf("%d %d\n",a[i],a[j]);
            }
        }
        
    }
    
    return 0;
}