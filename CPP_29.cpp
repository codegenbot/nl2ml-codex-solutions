int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"};
    assert(issame(filter_by_prefix(strings, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}