vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int total_chars_lst1 = 0;
    for (string str : lst1) {
        total_chars_lst1 += str.size();
    }

    int total_chars_lst2 = 0;
    for (string str : lst2) {
        total_chars_lst2 += str.size();
    }

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return total_chars_lst1 == total_chars_lst2 ? lst1 : lst2;
    }
}