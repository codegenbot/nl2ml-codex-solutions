#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + " in the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}