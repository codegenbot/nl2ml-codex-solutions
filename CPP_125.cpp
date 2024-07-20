vector<string> result;
    string word = "";
    for (char c : txt) {
        if (isalpha(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 == 1) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}