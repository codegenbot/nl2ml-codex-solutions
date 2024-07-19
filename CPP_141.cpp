#include <string>
#include <cassert>

std::string file_name_check(const std::string& file_name) {
    int digits = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digits++;
        }
    }
    if (digits > 3) {
        return "No";
    }
    
    size_t dot_pos = file_name.find('.');
    if (dot_pos == std::string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }
    
    std::string before_dot = file_name.substr(0, dot_pos);
    std::string after_dot = file_name.substr(dot_pos + 1);
    
    if (!isalpha(before_dot[0])) {
        return "No";
    }
    
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }
    
    return "Yes";
}