#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string str : lst1){
        totalChars1 += str.length();
    }
    
    for(string str : lst2){
        totalChars2 += str.length();
    }
    
    if(totalChars1 < totalChars2){
        return lst1;
    }else{
        return lst2;
    }
}

int main() {
    assert (total_match({"this"}, {}) == vector<string>{});
    
    return 0;
}