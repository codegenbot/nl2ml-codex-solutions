string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            if(result.length() > 2 && result[result.length()-1] == ' ' && result[result.length()-2] == ' '){
                result += "-";
            }else{
                result += "_";
            }
        }else{
            result += text[i];
        }
    }
    return result;
}