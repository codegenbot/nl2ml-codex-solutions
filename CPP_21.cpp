```
#include <vector>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers);

bool issame(std::vector<float> a, std::vector<float> b);

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = numbers[0