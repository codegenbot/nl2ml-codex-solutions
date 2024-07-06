bool prime_length(string str){
    int len = str.length();
    if(len<2) return true;
    for(int i=2;i<=sqrt(len);i++){
        if(len%i==0) return false;
    }
    return true;
}