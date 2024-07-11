string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && text[i - 1] == ' ' && text[i + 1] == ' ') {
                while (i + 1 < text.length() && text[i + 1] == ' ')
                    i++;
                result += "-";
            } else
                result += "_";
        } else
            result += text[i];
    }
    return result;
}