#include <vector>
#include <string>

bool operator==(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

bool issame(const std::string& a, const std::string& b) {
    return (a == b);
}

int main2() {
    std::vector<std::string> vec = reverse_delete("mamma", "mia");
    if (!issame({"", "True"}, &vec[0])) {
        assert(issame({"", "True"} , vec[0].substr(1,vec[0].size()-2).to_string() + ", True"));
        return 1;
    }
    return 0;
}