#include <vector>
#include <algorithm>

std::vector<int> issame(int n, std::vector<int> b) {
    std::vector<int> result;
    while(n != 1){
        if(n % 2 == 1)
            result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end());
    return result;
}