#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    for (unsigned int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool areEqual(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(areEqual(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}