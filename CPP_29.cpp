#include <vector>
#include <string>

// Define the filter_by_prefix function first
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    // your logic to check if two vectors are the same
    if(a.size() != b.size())
        return false;

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    string prefix = "xxx";
    try{
        assert (issame(filter_by_prefix(strings, prefix) , {"xxx", "xxxAAA", "xxx"}));
    }catch(int e){
        cout << "Error: The vectors are not the same." << endl;
    }
    return 0;
}