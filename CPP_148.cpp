#include <vector>
#include <cassert>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

int main() {
    assert (issame({"Jupiter", "Makemake"}, {}));
}