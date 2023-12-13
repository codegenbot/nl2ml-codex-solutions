```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

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

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    vector<string> words = {"apple", "banana", "orange", "pear", "peach"};
    
    vector<string> filtered_words = filter_by_prefix(words, "ap");
    vector<string> expected_words = {"apple", "ape"};
    
    assert(filtered_words == expected_words);

    return 0;
}
```