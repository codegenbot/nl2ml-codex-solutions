#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    return distance(str.begin(), unique(str.begin(), str.end()));
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    // Add more test cases as needed
    return 0;
}