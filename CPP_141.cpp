Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            has_dot = true;
        } else if (!has_dot && !isalpha(c)) {
            return "No";
        }
    }

    int dot_index = file_name.find('.');
    string extension = file_name.substr(dot_index + 1);

    if (extension != "txt" && extension != "exe" && extension != "dll")
        return "No";

    return "Yes";
}