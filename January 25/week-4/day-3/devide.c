#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if((n>0 && m>0) || (n<0 && m<0)){
        n=abs(n);
        m=abs(m);
        int res=0;
        while(n>=m){
            res++;
            n-=m;
        }
        printf("%d",res);
        
    }  else{
        n=abs(n);
        m=abs(m);
        int res=0;
        while(n>=m){
            res++;
            n-=m;
        }
        int negativeRes=-res;
        printf("%d",negativeRes);
    }
    return 0;
}