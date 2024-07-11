#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string longest(vector<string> strings);

int main(){
    // Test the function longest from the main function
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    // Add more test cases if needed
    return 0;
}

string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestStr = strings[0];
    for(const string& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}