```cpp
vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (char i : s) {
        bool found = false;
        for (char j : c) {
            if (i == j) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += i;
        }
    }
    result.push_back(temp);
    string reverse = temp;
    reverse.resize(reverse.size());
    std::reverse(reverse.begin(), reverse.end());
    if (temp == reverse) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(reverse_delete("mamma", "mia") == {"", "True"});
    return 0;
}