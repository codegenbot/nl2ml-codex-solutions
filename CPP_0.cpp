#include <vector>
#include <cmath>

bool has_close_elements(std::vector<double> numbers, double threshold) {
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    std::vector<double> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if(has_close_elements(a, 0.5))
        std::cout << "True";
    else
        std::cout << "False";
    return 0;
}