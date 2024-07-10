bool correct_bracketing(string brackets){
    int count = 0;
    for(char c : brackets){
        if(c == '(') count++;
        else if(count > 0) count--;
    }
    return count == 0;
}