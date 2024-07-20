Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot && (i != file_name.length() - 4 || !string(file_name.substr(i)).compare("txt") && !string(file_name.substr(i)).compare("exe") && !string(file_name.substr(i)).compare("dll"))){
            return "No";
        }
    }
    if(!found_dot) return "No";
    if(digit_count > 0) return "No";
    return "Yes";
}