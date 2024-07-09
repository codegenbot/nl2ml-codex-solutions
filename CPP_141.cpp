string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
        }
        else{
            if(!has_dot) before_dot += file_name[i];
        }
    }

    if(!before_dot.length()) return "No";

    for(int i=0; i(before dot) < 'a' || before[i] > 'z' && before[i] < 'A' || before[i] > 'Z') return "No";
    }

    string after_dot = file_name.substr(file_name.find('.')+1);
    if(after_dot == "txt" || after_dot == "exe" || after_dot == "dll") return "Yes";
    else return "No";
}