```
bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for(int i=0; i<brackets.size(); i++){
        if(brackets[i] == '(')count++;
        else if(brackets[i] == ')')if(count > 0)count--; 
    }
    return count==0;
}