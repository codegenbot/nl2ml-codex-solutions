string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(!found_dot && !isalpha(file_name[i])){
            return "No";
        }
    }
    if(found_dot){
        string extension = file_name.substr(file_name.find('.')+1);
        vector<string> valid_extensions = {"txt", "exe", "dll"};
        if(find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end()){
            return "No";
        }
    }
    else{
        return "No";
    }
    return "Yes";
}