bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}