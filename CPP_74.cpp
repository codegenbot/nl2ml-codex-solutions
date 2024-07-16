int sumChars(const vector<string>& lst) {
        int sum = 0;
        for (const string& str : lst) {
            sum += str.size();
        }
        return sum;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (sumChars(lst1) < sumChars(lst2)) {
            return lst1;
        }
        return (sumChars(lst1) == sumChars(lst2)) ? lst1 : lst2;
    }