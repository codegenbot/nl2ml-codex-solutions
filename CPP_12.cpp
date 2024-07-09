#include <string>
using namespace std;

std::string longest(vector<string> strings){
    if(strings.empty()) {
        return "None";
    }

    std::string longestStr = strings[0];
    for(const std::string& str : strings) {
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)) {
            longestStr = str;
        }
    }

    return longestStr;
}