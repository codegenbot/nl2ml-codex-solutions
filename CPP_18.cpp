#include <string>
#include <iostream>

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        pos += substring.length();
    }
    return count;
}

int main() {
    string s, sub;
    cin >> s >> sub;
    cout << how_many_times(s, sub);
    return 0;
}