string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; ;i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++) if(i%j==0) {isPrime=false;break;}
        if(isPrime){
            len=i;
            break;
        }
    }
    vector<string> words;
    string word;
    for(char c:sentence+' '){
        if(c==' ') {
            if(len>1)words.push_back(word);
            word="";
            len=0;
        } else {
            if(len==0)len++;
            else if(len==1)word+=c;
            else if(len==i) {word+=c; len=0;}
        }
    }
    for(string w:words)if(w.length()==len)result+=w+" ";
    return result.substr(0,result.size()-1);
}