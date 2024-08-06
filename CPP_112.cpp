#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool is_same(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return a == b;
}

std::string reverse_delete(const std::string &s, const std::string &c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return result + ((result == reverse_result) ? " True" : " False");
}

int main() {
    std::string input1, input2;
    std::cin >> input1 >> input2;
    
    std::vector<std::string> vec1 = {input1};
    std::vector<std::string> vec2 = {input2};

    bool areSame = is_same(vec1, vec2);
    std::string result = reverse_delete(input1, input2);

    std::cout << "Is_same result: " << (areSame ? "True" : "False") << std::endl;
    std::cout << result << std::endl;

    return 0;
}