#include <iostream>
#include <vector>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != (std::size_t)b.size()) {
        return false;
    }
    
    for(std::size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

bool assertSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != (std::size_t)b.size()) {
        return false;
    }
    
    for(std::size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::vector<std::string>> by_length(const std::vector<int>& arr) {
    std::vector<std::vector<std::string>> result(10);
    
    for (int i : arr) {
        if(i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    result[0].push_back("One");
                    break;
                case 2:
                    result[1].push_back("Two");
                    break;
                case 3:
                    result[2].push_back("Three");
                    break;
                case 4:
                    result[3].push_back("Four");
                    break;
                case 5:
                    result[4].push_back("Five");
                    break;
                case 6:
                    result[5].push_back("Six");
                    break;
                case 7:
                    result[6].push_back("Seven");
                    break;
                case 8:
                    result[7].push_back("Eight");
                    break;
                case 9:
                    result[8].push_back("Nine");
                    break;
            }
        }
    }

    return result;
}

int main() {
    assert(same(by_length({1,4,8}) , {"One","Four","Eight"}));
    return 0;
}