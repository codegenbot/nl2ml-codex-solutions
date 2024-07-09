#include <string>

std::string fix_spaces(std::string text) {
    std::string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result[result.length() - 1] != ' ') {
                if (result.length() >= 2 && result.back() == ' ' && result.back(1) == ' ')
                    result.pop_back(), result.pop_back();
                else
                    result += '-';
            } else
                result += '_';
        } else
            result += text[i];
    }
    return result;
}