```cpp
std::string middleCharacter(std::string s) {
    int length = s.length();
    if (length % 2 == 0) {
        return s.substr(length / 2, 1) + s.substr(length / 2 + 1, 1);
    } else {
        return s.substr(length / 2, 1);
    }
}