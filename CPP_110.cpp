string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int num : lst2) {
        if (num % 2 != 0) {
            if (oddCount == 0) return "NO";
            else oddCount--;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}