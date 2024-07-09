bool is_nested(string str){
    int count = 0;
    for(char c : str){
        if(c == '[')count++;
        else if(c == ']')count--;
        if(count < 0 || (c == ']' && count > 0))return true;
    }
    return false;
}