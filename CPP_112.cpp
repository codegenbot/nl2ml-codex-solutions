#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b);

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c);

int main() {
    std::string input_str;
    std::string char_to_delete;

    std::cout << "Enter the input string: ";
    std::cin >> input_str;

    std::cout << "Enter the character to delete: ";
    std::cin >> char_to_delete;

    std::vector<std::string> result = reverse_delete(input_str, char_to_delete);

    std::cout << "Resulting string after deletion and reversal: " << result[0] << std::endl;
    std::cout << "Is the resulting string same as the reversed string? " << result[1] << std::endl;

    return 0;
}