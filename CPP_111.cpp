bool is_same(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

int main() {
    assert(is_same(histogram("a"), {{'a', 1}}));
    return 0;
}