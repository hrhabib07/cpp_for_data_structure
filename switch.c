#include<stdio.h>
int main(){
    int a=10;
    int b=a++;
    int c= ++b;
    printf("%d\n",c++);
    printf("%d",c);
    return 0;
}