#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a,vector<string> b){
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

vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    // Calculate total number of characters in lst1
    for(string str : lst1){
        totalChars1 += str.length();
    }
    
    // Calculate total number of characters in lst2
    for(string str : lst2){
        totalChars2 += str.length();
    }
    
    // Compare total number of characters and return the appropriate vector
    if(totalChars1 < totalChars2){
        return lst1;
    }
    else{
        return lst2;
    }
}

int main(){
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}