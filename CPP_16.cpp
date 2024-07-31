#include <algorithm>
#include <cassert>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
    return str.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 3);
    return 0;
}