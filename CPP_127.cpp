#include <vector>
#include <algorithm>
#include <string>

std::string intersection(std::vector<int> interval1, std::vector<int> interval2) {
    int start = std::max(interval1[0], interval2[0]);
    int end = std::min(interval1[1], interval2[1]);

    if(start > end) return "NO";

    for(int i = 2; i*i <= (end - start + 1); i++){
        if((end - start + 1) % i == 0) return "NO";
    }

    return "YES";
}

int main() {
    assert(intersection({-2, -2}, {-3, -2}) == "NO");
    return 0;
}