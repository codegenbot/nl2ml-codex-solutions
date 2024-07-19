#include <iostream>
#include <string>
#include <cassert>

string file_name_check(string file_name);

string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;
    int dot_index = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_index = i;
        }
    }
    
    if (digit_count > 3 || dot_count != 1 || dot_index == 0 || dot_index == file_name.length() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dot_index + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}

int main() {
    // Test cases
    assert(file_name_check("file123.txt") == "Yes");
    assert(file_name_check("myFile2.exe") == "Yes");
    assert(file_name_check("data.dll") == "Yes");
    assert(file_name_check(".hidden.txt") == "No");
    assert(file_name_check("file.txt") == "No");
    assert(file_name_check("s.txt") == "No");
    
    return 0;
}