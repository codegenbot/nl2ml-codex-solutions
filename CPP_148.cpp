#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {})); // Ensure main function calls bf function correctly
}