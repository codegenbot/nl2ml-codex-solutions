#include <algorithm>
#include <vector>

bool my_same(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(),
          [&](float x) { return std::abs(x - *std::min_element(b.begin(), b.end())+1e-6) <= 1e-6; }));

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            std::vector<float> even;
            for (float x : l) {
                if (x % 2 == 0) {
                    even.push_back(x);
                }
            }
            std::sort(even.begin(), even.end());
            result.push_back(*std::min_element(even.begin(), even.end()));
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(my_same(sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}), {-12.0f, 4.0f, 2.0f, 8.0f, 3.0f, 5.0f, 11.0f, 23.0f, 12.0f, -10.0f});
    return 0;
}