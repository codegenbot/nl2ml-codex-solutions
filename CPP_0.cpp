#include <vector>
#include <cmath>

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    bool result = has_close_elements(a, 0.5);
    return 0;
}

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}