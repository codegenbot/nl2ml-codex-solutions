#include <algorithm>

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    
    bool is_palindrome = true;
    int left = 0, right = temp.size() - 1;
    while (left < right) {
        if (temp[left] != temp[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }
    
    vector<string> output;
    output.push_back(temp);
    output.push_back(is_palindrome ? "True" : "False");
    return output;
}