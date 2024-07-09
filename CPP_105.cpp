#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        switch (i) {
            case 1: result.push_back("One"); break;
            case 2: result.push_back("Two"); break;
            case 3: result.push_back("Three"); break;
            case 4: result.push_back("Four"); break;
            case 5: result.push_back("Five"); break;
            case 6: result.push_back("Six"); break;
            case 7: result.push_back("Seven"); break;
            case 8: result.push_back("Eight"); break;
            case 9: result.push_back("Nine"); break;
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main_test() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}