int totalChars1 = 0, totalChars2 = 0;
    for (const string& str : lst1) {
        totalChars1 += str.size();
    }
    for (const string& str : lst2) {
        totalChars2 += str.size();
    }
    if (totalChars1 < totalChars2) {
        return lst1;
    }
    return lst2;
}