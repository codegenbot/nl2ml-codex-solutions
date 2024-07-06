string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length();i++){
        if(text[i] == ' '){
            if(i+1 >= text.length() || text[i+1] != ' '){
                result += '_';
            }else{
                int j = i;
                while(j+1 < text.length() && text[j+1] == ' ') j++;
                result.append(" -");
                i = j;
            }
        }else{
            result += text[i];
        }
    }
    return result;
}