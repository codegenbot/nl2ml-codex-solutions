Here is the completed code:

string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 1) {
        return string(1, str[(len - 1) / 2]);
    } else {
        return string(2, str[len / 2 - 1]) + str[len / 2];
    }
}