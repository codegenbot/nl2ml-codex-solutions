```cpp
std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-' && i == 0) {
            result = "";
            capitalizeNext = true;
        } else if (str[i] == '-') {
            if (!result.empty()) {
                if (capitalizeNext) {
                    result += ' ';
                    capitalizeNext = false;
                }
            } else {
                capitalizeNext = true;
            }
        } else if (capitalizeNext) {
            result += toupper(str[i]);
            capitalizeNext = false;
        } else {
            result += tolower(str[i]);
        }
    }

    if (!result.empty() && !capitalizeNext) {
        result[0] = tolower(result[0]);
    }

    return result;
}