#include <cassert>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame({"ahmed", "gamal"}, {"ahmed", "gamal"}));
    return 0;
}