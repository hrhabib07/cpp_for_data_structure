#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    unsigned long long int base1 = 0, base2 = 1, next;
    printf("%llu %llu ", base1, base2); 

    for (int i = 2; i < n; i++) {  
        next = base1 + base2;
        printf("%llu ", next);
        base1 = base2;
        base2 = next;
    }
    return 0;
}