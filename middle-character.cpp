string middleCharacter(string str) {
    int len = str.length();
    if (len % 2 == 1)
        return string(1, str.substr(len / 2, 1));
    else
        return str.substr((len - 1) / 2, 1) + str.substr((len + 1) / 2, 1);
}