Here is the solution:

string middleCharacter(string s) {
    int length = s.length();
    if(length % 2 == 1)
        return s.substr((length - 1)/2, 1);
    else
        return s.substr((length / 2) - 1, 2);
}