#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size.");
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            throw std::runtime_error("Vectors are not the same after checking elements.");
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
    try {
        assert(issame(get_even_odd(0), std::vector<int>{1, 0}));
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1;
    }
    return 0;
}