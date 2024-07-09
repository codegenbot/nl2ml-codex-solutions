string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=1; i<=100; i++){
        if(isPrime(i)){
            int j = 0;
            while(j < sentence.length() && isPrime(sentence.find(" ",j)+1)){
                j += strlen(&sentence[j]);
            }
            if(j == sentence.length()){
                result += &sentence[count] + " ";
                count += strlen(&sentence[count]) + 1;
            }
        }
    }
    return result.substr(0, result.length()-1);
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i=2; i*i<=n; i++)
        if(n%i == 0)
            return false;
    return true;
}