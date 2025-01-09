#include<bits/stdc++.h>
using namespace std;
int isDivisible(long long int n){
    if(n%9==0){
        return 1;
    }
    string str = to_string(n);
    int size = str.length();
    bool isSquare = true;
    while (isSquare)
    {
    int isDiv = 0;
        isSquare=false;  
        for (int i = 0; i < size; i++)
        {
            int num = str[i] - '0';
            if(num<4){
                isSquare=true;
                int square = num* num;
                str[i] = square+'0';
                long long numb = stoll(str);
                int result = numb%9;
                if(result == 0) {
                    isDiv=1;
                    break;
                };
                str = to_string(n);
            } 
        }    
        for (int i = 0; i < size; i++)
        {
            int num = str[i] - '0';
            if(num<4){
                isSquare=true;
                int square = num* num;
                str[i] = square+'0';
                long long numb = stoll(str);
                int result = numb%9;
                if(result == 0) {
                    isDiv=1;
                    break;
                };
            } 
        }    
        
    return isDiv;
    }  
}
int main(){
    int a;
    cin>>a;
    long long int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    };
    int output[a];
    for (int i = 0; i < a; i++)
    {
        output[i] = isDivisible(arr[i]);
    };

    for (int i = 0; i < a; i++)
    {
         if (output[i] == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    if (i != a - 1) {
        cout << endl;
    }
    }
    return 0;
}