
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

float max_element(const std::vector<float>& l) {
    return *std::max_element(l.begin(), l.end());
}