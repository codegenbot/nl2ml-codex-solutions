vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m).compare(target)==0){
            result.push_back(i);
            while(i+n-m>=i+m){
                if(text.substr(i,m).compare(target)!=0) break;
                i++;
                result.push_back(i);
            }
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}