string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            int found = 0;
            for (int num2 : lst2) {
                if (num2 % 2 == 0 && num2 != num) {
                    swap(lst1[find(lst1.begin(), lst1.end(), num)], num2);
                    found = 1;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}