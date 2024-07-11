string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){
            if(i+1 >= text.length() || text[i+1] != ' '){
                result += '_';
            } else {
                int count = 1;
                while(i+count < text.length() && text[i+count] == ' ') {
                    count++;
                }
                for(int j = 0; j < count - 2; j++){
                    result += '-';
                }
                i += count-1;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}