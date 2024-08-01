string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst2) {
        if (num % 2 == 0) {
            evenCount--;
            break;
        } else
            evenCount++;
    }
    return evenCount == 0 ? "YES" : "NO";
}