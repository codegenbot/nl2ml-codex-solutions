#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}