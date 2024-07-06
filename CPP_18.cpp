#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        pos += substring.size();
    }
    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    return 0;
}