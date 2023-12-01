string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount == 0) {
        return "YES";
    }
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}