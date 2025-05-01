#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    if(m1!=n2){
        cout<<"invalid matrix for multiplication";
    } else{

    int A[n1][m1];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin>>A[i][j];
        }    
    }
    
    int B[n2][m2];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin>>B[i][j];
        }    
    }

    int C[n1][m2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            C[i][j]= 0;
            for (int k = 0; k < m1; k++)
            {
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
            }
               
        } 
    }
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout<<C[i][j]<<" ";
        }    
    cout<<endl;
    }
    cout<<endl;
    }    

    return 0;
}