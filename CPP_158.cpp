string maxWord = "";
    int maxUnique = 0;

    for (const string& word : words) {
        int uniqueChars = set<char>(word.begin(), word.end()).size();
        if (uniqueChars > maxUnique || 
            (uniqueChars == maxUnique && word < maxWord)) {
            maxWord = word;
            maxUnique = uniqueChars;
        }
    }

    return maxWord;
}