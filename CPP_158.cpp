string max_word;
    int max_unique_chars = 0;

    for (const auto &word : words) {
        int unique_chars = set<int>(word.begin(), word.end()).size();

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}