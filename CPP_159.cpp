#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    auto eat = [](int number, int need, int remaining) -> std::vector<int> {
        int total = number + need;
        int eaten = total > remaining ? remaining : total;
        int left = remaining - eaten;
        return {eaten, left};
    };

    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}