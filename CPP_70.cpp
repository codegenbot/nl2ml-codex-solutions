```cpp
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> list) {
    std::sort(list.begin(),list.end());
    for(int i=0;i<list.size();i++){
        if((i+1)%3==0){
            std::reverse(list.begin()+i,list.begin()+(i+1));
        }
    }
    return list;
}

bool isEqual(vector<int> a, vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

assert(isEqual(strange_sort_list({111111}) , {111111})); 
return 0;