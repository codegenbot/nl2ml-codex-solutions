std::string spinWords(std::string str) {
    std::vector<std::string> words;
    std::stringstream ss(str);
    std::string word;

    while (ss >> word) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        words.push_back(word);
    }

    return std::join(words, " ");
}