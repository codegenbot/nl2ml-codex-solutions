bool sequenceEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    int num;
    std::cin >> num;
    get_odd_collatz(num);
    assert(sequenceEqual(get_odd_collatz(1), {1}));