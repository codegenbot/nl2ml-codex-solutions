#include <vector>
#include <cassert>

namespace Contest {
    int solutions(const std::vector<int>& lst){
        int sum = 0;
        for(size_t i = 0; i < lst.size(); i += 1){
            if(i % 2 == 0 && lst[i] % 2 != 0){
                sum += lst[i];
            }
        }
        return sum;
    }
}

using namespace Contest;

int main() {
    assert(Contest::solutions({3, 13, 2, 9}) == 3);
    return 0;
}