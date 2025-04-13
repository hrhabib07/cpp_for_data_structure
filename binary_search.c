#include<stdio.h>
int main(){
    int a[7]={1,3,5,9,11,13,19};
    int l=0,h=7-1,mid,found=-1;
    int t=1;
    while (l<=h)
    {
        int mid = (h+l)/2;
        if(a[mid]==t) {found=mid;break;}
        else if(a[mid]>t) h=mid-1;
        else l=mid+1;
    }
    printf("index of target value is %d ", found);
    return 0;
}