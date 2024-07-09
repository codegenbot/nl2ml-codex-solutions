```c++
string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                result += word;
                string revWord = word; 
                std::reverse(revWord.begin(), revWord.end());
                result += " ";
                word = "";
            } else {
                result += word;
                result += " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        result += word;
        string revWord = word; 
        std::reverse(revWord.begin(), revWord.end());
        result += " ";
        word = "";
    } else {
        result += word;
    }

    return result;
}