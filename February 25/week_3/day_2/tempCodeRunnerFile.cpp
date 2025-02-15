for (int i = l; i <= r; i++)
        {
        int res = i/a+i%a;
        if(res>=max){
            max = res;
        };
    }
    cout<<max<<"\n";   