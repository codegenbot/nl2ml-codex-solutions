#include <string>
#include <assert.h>

string longest(vector<string> strings){
    assert(!strings.empty());
    
    string longestStr = strings[0];
    for(const string& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}