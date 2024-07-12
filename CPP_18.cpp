#include <string>
using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != string::npos) {
        ++count;
        pos += substring.size(); // skip overlaping cases
    }
    return count;