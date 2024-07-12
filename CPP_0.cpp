#include <vector>

int has_close_elements(std::vector<float> a, float threshold) {
    for(int i = 0; i < a.size() - 1; i++) {
        if(std::abs(a[i] - a[i + 1]) <= threshold)
            return 1;
    }
    return 0;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    assert(std::has_close_elements(a, 0.1f) == 1);

    return 0;
}