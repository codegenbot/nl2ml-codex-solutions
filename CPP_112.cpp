#include <vector>
#include <set>
#include <string>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    
    // Create a set of characters in string c for efficient lookups
    std::set<char> c_set(c.begin(), c.end());
    
    // Initialize an empty string to store the result
    std::string temp = "";
    
    // Iterate over each character in string s
    for (char ch : s) {
        // If the character is not in the set of characters in string c, add it to the temporary string
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    // Check if the temporary string is a palindrome
    bool is_palindrome = true;
    for (int i = 0; i < temp.length() / 2; i++) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    // Add the result string and "True"/"False" to the vector
    result.push_back(temp);
    result.push_back((is_palindrome) ? "True" : "False");
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}