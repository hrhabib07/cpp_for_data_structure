int leng = s.size();
    if(leng<11){
        return s;
    } else{
        string miniS;
        miniS->push_front=s.front();
        miniS->push_back=leng+'0';
        miniS->push_back=s.back();
    }