#include <bits/stdc++.h>
using namespace std;

int main() {
	string sl1="I hate it";
	string sl2="I love it";
	string snl1="I hate that";
	string snl2="I love that";
	int n; cin>>n;
	for(int i = 1; i<n; i++){
	    if(i%2!=0){
	        cout<<snl1<<" ";
	    } else{
	        cout<<snl2<<" ";
	    }
	};
	    if(n%2!=0){
	        cout<<sl1<<" ";
	    } else{
	        cout<<sl2<<" ";
	    }
	

}
