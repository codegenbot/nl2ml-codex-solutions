#include <cassert>
#include <map>

using namespace std;

map<char,int> histogram(string test);

bool isEqual(map<char,int> a, map<char,int> b) {
    return a == b;
}

map<char,int> histogram(string test) {
    map<char, int> counts;
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            counts[letter]++;
            letter = "";
        }
    }
    if (!letter.empty()) counts[letter]++;
    return counts;
}

int main() {
    assert(isEqual(histogram("a"), {{'a', 1}}));

    return 0;
}