int count_total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int total_chars_lst1 = count_total_chars(lst1);
    int total_chars_lst2 = count_total_chars(lst2);

    if (total_chars_lst1 < total_chars_lst2) {
        return lst2;
    } else {
        return lst1;
    }
}