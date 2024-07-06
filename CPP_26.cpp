#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;

    for(int i : numbers) {
        if(std::find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }

    return result;
}

int main(){
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
}