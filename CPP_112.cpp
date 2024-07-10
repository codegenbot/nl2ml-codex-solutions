vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    // Create a set of characters in string c for efficient lookups
    set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    string res = "";
    
    // Iterate over each character in string s
    for (char c : s) {
        // If the character is not in set c, add it to the result
        if (c_set.find(c) == c_set.end()) {
            res += c;
        }
    }
    
    // Check if the result string is palindrome
    bool is_palindrome = true;
    int left = 0, right = res.size() - 1;
    while (left < right) {
        if (res[left] != res[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    // Add the result string and palindrome status to the vector
    result.push_back(res);
    result.push_back((res == reverse_string(res)) ? "True" : "False");
    
    return result;
}

string reverse_string(string s) {
    string rev = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}