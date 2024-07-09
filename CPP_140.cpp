string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(i < text.length() - 1 && text[i+1] == ' '){
                if(result.length() > 0 || i > 0) result += "-";
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}