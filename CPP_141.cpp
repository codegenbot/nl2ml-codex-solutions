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
        else if(found_dot && (file_name[i] != ' ')) {
            if(i==0 || !isalpha(file_name[i-1])){
                return "No";
            }
        }
    }
    if(!found_dot) return "No";
    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos+1);
    if(ext!="txt" && ext!="exe" && ext!="dll") return "No";
    return "Yes";
}