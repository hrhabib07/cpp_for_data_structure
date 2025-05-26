#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[78];
    gets(s);
    int fr[26]={0};
    for(int i =0; i<strlen(s);i++){
        int ind = s[i]-'a';
        // printf("%d\n",ind);
        fr[ind]++;
    }
    for(int i = 0; i<26;i++){
        if(fr[i]<3) printf("%c",(i+'a'));
    }
    return 0;
}
