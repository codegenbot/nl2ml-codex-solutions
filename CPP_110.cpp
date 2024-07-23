string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0 && num2 != num) {
                    swap(lst1[std::find(lst1.begin(), lst1.end(), num) - lst1.begin()], num2);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";