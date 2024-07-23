map<char, int> result;
    map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (auto it : count) {
        if (it.second > maxCount) {
            maxCount = it.second;
        }
    }

    for (auto it : count) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }

    return result;
}