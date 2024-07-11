string file_name_check(string file_name){
    int digit_count = 0;
    bool dot_found = false;
    for(int i = 0; i < file_name.size(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if(file_name[i] == '.'){
            dot_found = true;
        }
    }

    if(digit_count > 3 || !dot_found) {
        return "No";
    }

    string before_dot = file_name.substr(0, file_name.find('.'));
    string after_dot = file_name.substr(file_name.find('.') + 1);

    if(before_dot.empty() || (!isalpha(before_dot[0]) && !isupper(before_dot[0]))) {
        return "No";
    }

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}