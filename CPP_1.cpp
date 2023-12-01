#include <vector>
#include <string>
#include <cassert>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string group;
    int count = 0;

    for(char c : paren_string){
        if(c == '('){
            if(count > 0){
                group += c;
            }
            count++;
        }
        else if(c == ')'){
            count--;
            if(count > 0){
                group += c;
            }
            else if(count == 0){
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}