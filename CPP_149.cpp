#include <vector>
#include <string>
#include <initializer_list>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int sorted_list_sum(const vector<vector<string>>& lst) {
    int sum = 0;
    for (const auto& sublst : lst) {
        std::sort(sublst.begin(), sublst.end());
        if (issame({{"hello", "world"}}, vector<string>(sublst.begin() + 1, sublst.end()))) {
            sum += std::stoi(sublst[0].substr(6));
        }
    }
    return sum;
}

int main() {
    vector<vector<string>> lst = {{"aaaa", "bbbb"}, {"dd"}, {"cc"}};
    assert(sorted_list_sum(lst) == 0);
    return 0;
}