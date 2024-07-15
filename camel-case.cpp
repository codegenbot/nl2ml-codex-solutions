```cpp
std::string camelCase(std::string input) {
    std::string output;
    size_t start = 0;

    for (size_t i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == '-') {
            if (start < i) {
                output += (input.substr(start, i - start)).toupper();
                start = i + 1;
            }
            if (i < input.size()) {
                if (input[i + 1] != '-') {
                    output.push_back(std::tolower(input[i]));
                    start = i + 1;
                }
            } else {
                return output;
            }
        }
    }

    return output;
}