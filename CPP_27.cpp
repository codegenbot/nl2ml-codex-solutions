string filp_case(string str){
    string result = "";
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            result += (ch - ('a' - 'A'));
        else 
            result += ch;
    }
    return result;
}