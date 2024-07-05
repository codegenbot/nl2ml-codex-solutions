#include <vector>
#include <string>
#include <cassert>
using namespace std;

string concatenate(const vector<string>& strings) {
    string result = "";
    for(const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}