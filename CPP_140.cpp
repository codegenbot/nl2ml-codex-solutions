string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length();i++){
        if(text[i] == ' '){
            if(i+1 < text.length() && text[i+1] == ' ' && (result.empty() || result.back() != ' ')){
                if(result.length() > 2) result += "-";
                else result += "_";
            }
            else result += '_';
        }
        else result += text[i];
    }
    return result;
}