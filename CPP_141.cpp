#include <iostream>
#include <string>

std::string file_name_check(std::string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(c == '.'){
            found_dot = true;
        } else if(!found_dot){
            if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')) return "No";
        }
    }
    if(found_dot) {
        std::string extension = file_name.substr(file_name.find('.')+1);
        if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    } else return "No";
    return "Yes";
}