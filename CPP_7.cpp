#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    // Sample test case
    vector<string> strings = {"apple", "banana", "orange", "grape"};
    string substring = "an";
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    for(const string& str : filtered_strings){
        std::cout << str << " ";
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}