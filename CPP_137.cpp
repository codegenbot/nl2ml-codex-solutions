int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("1"))) == std::string(""));

    return 0;
}