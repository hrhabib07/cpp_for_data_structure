#include<stdio.h>
int main(){
    int t; scanf("%d",&t);
    while (t--)
    {
        int m1,m2,d; 
        scanf("%d %d %d",&m1,&m2,&d);
        int single = m1*d;
        int curr = single/(m1+m2);
        printf("%d\n", d-curr);
    }
    
    return 0;
}