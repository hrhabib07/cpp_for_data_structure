#include<stdio.h>
int main(){
    int t; scanf("%d",&t);
    while (t--)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int firstThree = a*b*c;
        
        double d = m*1.0/firstThree;
        if((long long int)d==d) printf("%lld\n",((long long int)d));
        else printf("%d\n",-1);
    }
    
    return 0;
}