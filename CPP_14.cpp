#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str);

bool issame(vector<string> a, vector<string> b) {
    // function implementation
}

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    string prefix = "";
    for (int i = 0; i < str.length(); i++) {
        prefix += str[i];
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main() {
    assert(all_prefixes("WWW") == vector<string>{"W", "WW", "WWW"});
    
    return 0;
}