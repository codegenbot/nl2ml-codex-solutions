for (int i = 0; i < text.length(); ++i) {
        if (text[i] == ' ' && i + 2 < text.length() && text[i + 1] == ' ' && text[i + 2] == ' ') {
            text.replace(i, 3, "-");
        } else if (text[i] == ' ') {
            text[i] = '_';
        }
    }
    return text;
}