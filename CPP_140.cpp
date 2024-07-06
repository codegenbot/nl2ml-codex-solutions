```cpp
string fix_spaces(string text){
    string result = "";
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' ' && (i == 0 || text[i-1] != ' ') && (i == text.length() - 1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            int count = 0;
            while(i + count < text.length() && text[i + count] == ' '){
                count++;
            }
            for(int j = 0; j < count - 1; j++){
                result += ' ';
            }
            result += '-';
        } else {
            result += text[i];
        }
    }
    return result;
}