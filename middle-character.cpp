Here is the solution in C++:

string middleCharacter(string s) {
    int length = s.length();
    if (length % 2 == 1)
        return string(1, s[(length - 1) / 2]);
    else
        return string(2, s[length / 2 - 1] + s[length / 2]);