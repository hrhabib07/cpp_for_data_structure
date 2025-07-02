    #include<stdio.h>
    int main(){
        int n; scanf("%d", &n);
        int c2=0,c3=0;
        for (int i = 0; i < n; i++)
        {
            int x; scanf("%d",&x);
            if (x%2==0 && x%3==0)
            {
                c2++
            };
            else if (x%2==0)
            {
                c2++;
            } else if(x%3==0) c3++; 
        };
        printf("%d %d",c2,c3);
        
        return 0;
    }