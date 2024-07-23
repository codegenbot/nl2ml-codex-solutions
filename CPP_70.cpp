#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> list) {
    std::sort(list.begin(),list.end());
    for(int i=0;i<list.size();i++){
        if((i+1)%3==0){
            std::reverse(list.begin()+i,list.begin()+(i+1));
        }
    }
    return list;
}

int main() {
    std::vector<int> list;
    for(int i : {1, 1, 1, 1, 1, 1, 1}) {
        list.push_back(i);
    }
    assert(issame(strange_sort_list(list), {111111}));
    return 0;
}