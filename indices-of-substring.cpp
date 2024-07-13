# include <iostream>
# include <vector>
# include <cstring>
# include <cctype>

int main() {
    char text[100], target[100];
    std::cin.getline(text, 100);
    std::cin.getline(target, 100);

    if (strlen(target) == 0) {
        std::cout << "0";
        return 0;
    }

    std::vector<int> indices;
    int textLen = strlen(text);
    int targetLen = strlen(target);
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        bool found = true;
        for (int j = 0; j < targetLen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break; // Update this line
            }
        }
        if (found) {
            indices.push_back(i);
            i += targetLen - 1; 
        }
    }

    if (indices.size() == 0) {
        std::cout << "0";
    } else {
        for (size_t i = 0; i < indices.size(); ++i) {
            std::cout << indices[i] << " ";
        }
    }

    return 0;
}