string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(char c : sentence){
        if(c != ' '){
            word += c;
        } else {
            int length = word.length();
            bool is_prime = true;
            if(length <= 1){
                is_prime = false;
            } else {
                for(int i=2; i*i<=length; i++){
                    if(length % i == 0){
                        is_prime = false;
                        break;
                    }
                }
            }
            if(is_prime){
                result += word + " ";
            }
            word = "";
        }
    }
    int length = word.length();
    bool is_prime = true;
    if(length <= 1){
        is_prime = false;
    } else {
        for(int i=2; i*i<=length; i++){
            if(length % i == 0){
                is_prime = false;
                break;
            }
        }
    }
    if(is_prime){
        result += word;
    }
    return result;
}