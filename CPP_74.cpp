#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    // implement the logic of the issame function
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_lst1 = 0, total_chars_lst2 = 0;
    
    for (const string& str : lst1) {
        total_chars_lst1 += str.length();
    }
    
    for (const string& str : lst2) {
        total_chars_lst2 += str.length();
    }
    
    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    // your test cases and asserts
    return 0;
}