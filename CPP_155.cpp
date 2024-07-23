#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        std::cout << "Error: Vectors are not the same size." << std::endl;
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            std::cout << "Error: Elements at index " << i << " do not match." << std::endl;
            return false;
        }
    }
    return true;
}

std::vector<int> get_even_odd(int num) {
    std::vector<int> result(2);
    int temp = abs(num);
    while(temp != 0){
        int digit = temp % 10;
        if(digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        temp /= 10;
    }
    return result;
}

int main() {
    assert(issame(get_even_odd(0), std::vector<int>{1, 0}));
    return 0;
}