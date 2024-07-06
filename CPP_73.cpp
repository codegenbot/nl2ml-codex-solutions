#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::string str = "";
    for (int i : arr)
        str += std::to_string(i);
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (str[left] != str[right])
            ++changes;
        else
            ++left, --right;
    }
    return changes;

int main 
{
    
}