int count = 0;
    string result = "";
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result += '-';
                count = 1;
            } else {
                result += '_';
            }
        } else {
            result += c;
            count = 0;
        }
    }
    return result;
}