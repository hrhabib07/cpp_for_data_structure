#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int last = n%10;
    int first = n/100;
    int mid = (n/10)%10;
    printf("Sum of all digits - %d \n",first+mid+last);
    return 0;
}



// n%10= last digit
// n/100= first
// 135/10 = 13%10=3; 2 digit