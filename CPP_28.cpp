using namespace std;

#include <iostream>
#include <vector>
#include <string>

string concatenate(vector<string> strings){
    string result = "";
    for(string str : strings){
        result += str;
    }
    return result;
}