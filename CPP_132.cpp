```
int count_open = 0;
for(char c : str){
    if(c == '[')count_open++;
    else if(c == ']') {
        if(count_open > 0)count_open--;
        else return false;
    }
}
return count_open > 0;