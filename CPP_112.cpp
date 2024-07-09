#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;

    for (char& ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(std::string(1, ch));
    }

    std::string res_str = "";
    for (std::string str : result)
        res_str += str;
    bool is_palindrome = false;
    int start = 0, end = res_str.length() - 1;
    while (start < end) {
        if (res_str[start] != res_str[end])
            break;
        start++;
        end--;
    }
    if (start >= end)
        is_palindrome = true;

    std::vector<std::string> final_result;
    final_result.push_back(res_str);
    final_result.push_back(std::to_string(is_palindrome));
    return final_result;
}

int main() {
    std::string s = "mamma";
    std::string c = "mia";
    if(issame(reverse_delete(s, c), {"", "1"}))
        std::cout << "Test passed." << std::endl;
    else
        std::cout << "Test failed." << std::endl;
    
    return 0;
}