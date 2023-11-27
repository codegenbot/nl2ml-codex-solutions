#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(vector<string> lst);

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

int main() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    }));
    return 0;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        int count = 0;
        for(char c : str){
            if(c % 2 != 0){
                count++;
            }
        }
        string res = "the number of odd elements " + to_string(count) + " in the string " + str + " of the input.";
        result.push_back(res);
    }
    return result;
}