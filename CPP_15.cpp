#include <string>
#include <cassert>

using namespace std;

string string_sequence(int n) {
    string result;
    for(int i = 0; i < n; i++){
       result += to_string(i) + " ";
    }
    return result;
}