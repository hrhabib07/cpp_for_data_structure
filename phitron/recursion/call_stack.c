#include<stdio.h>
void gello(){
    printf("Gello\n");
}

void hello(){
    printf("Hello\n");
    gello();
    printf("Hello 2\n");
}

int main(){
    printf("hi\n");
    hello();
    return 0;
}