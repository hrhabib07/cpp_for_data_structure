#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int rem = a%b;
        if(rem!=0){
        int res= b-rem;
        printf("%d \n",res);
        } else{
        printf("%d \n",0);
        }
    }
    return 0;
}