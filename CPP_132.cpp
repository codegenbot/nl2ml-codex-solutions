int count = 0;
for(int i = 0; i < str.length(); i++){
    if(str[i] == '[') count++;
    else if(str[i] == ']') {
        if(count > 1) return true;
        --count;
    }
}
return false;