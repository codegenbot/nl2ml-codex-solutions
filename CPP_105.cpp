#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size())
        return false;
    for (int i = 0; i < vec1.size(); ++i)
        if (vec1[i] != vec2[i])
            return false;
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    std::sort(numbers.begin(), numbers.end());
    std::reverse(numbers.begin(), numbers.end());

    std::vector<std::string> result;
    for (int num : numbers) {
        std::string str;
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;
}