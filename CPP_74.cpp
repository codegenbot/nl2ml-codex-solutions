#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int totalChars(const vector<string>& lst) {
    int total = 0;
    for(const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(const vector<string>& a, const vector<string>& b){
    return totalChars(a) == totalChars(b);
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if(totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}