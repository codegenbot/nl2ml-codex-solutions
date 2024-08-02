string file_name_check(string file_name) {
    int dot_pos = file_name.find(".");
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.length() - 1) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    int digit_count = 0;
    for (char c : before_dot) {
        if (isdigit(c)) {
            digit_count++;
        }
    }

    if (digit_count > 3) {
        return "No";
    }

    if (before_dot[0] < 'a' || before_dot[0] > 'z') {
        if (before_dot[0] < 'A' || before_dot[0] > 'Z') {
            return "No";
        }
    }

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }

    return "Yes";
}