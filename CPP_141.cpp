int count_digits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    if (file_name.find('.') == string::npos) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!isalpha(before_dot[0])) {
        return "No";
    }

    if (count_digits(file_name) > 3 || count_digits(before_dot) > 0 || count_digits(after_dot) > 0) {
        return "No";
    }

    string valid_extensions[] = {"txt", "exe", "dll"};
    bool is_valid_extension = false;
    for (string ext : valid_extensions) {
        if (after_dot == ext) {
            is_valid_extension = true;
            break;
        }
    }

    if (!is_valid_extension) {
        return "No";
    }

    return "Yes";
}