int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            ++count;
        } else if ((c == 'B') || (c == 'D')) {
            ++count;
        }
    }
    return count;
}