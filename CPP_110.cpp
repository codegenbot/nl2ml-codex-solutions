Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i = 0; i < lst1.size(); i++) {
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] % 2 == 1) {
                int temp = lst1[i];
                lst1[i] = lst2[j];
                lst2[j] = temp;
                return "YES";
            }
        }
    }
    return "NO";
}