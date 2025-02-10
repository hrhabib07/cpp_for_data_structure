#include <stdio.h>
int main(){
    char ch; scanf("%c",&ch);
    if(ch>=97){
        int res=ch-32;
        printf("%c",res);
    } else{
        int res=ch+32;
        printf("%c",res);
    }
    return 0;
}