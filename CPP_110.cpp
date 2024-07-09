Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i = 0; i < lst1.size(); i++) {
        bool found = false;
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] % 2 == 0 && lst2[j] % 2 != 0) {
                swap(lst1[i], lst2[j]);
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}