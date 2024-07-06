#include <vector>
#include <algorithm>

bool isEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> findMaximum(int n, int k) {
    std::cout << "Enter the number of elements: ";
    int* arr = new int[n];
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    std::vector<int> myVector;
    for (int i = 0; i < n; ++i) {
        myVector.push_back(arr[i]);
    }
    
    std::vector<int> result;
    int max_val;
    for (int i = 0; i < k; ++i) {
        std::vector<int>::iterator it;
        for (it=myVector.begin(); it!=myVector.end(); ++it){
            if (*it > max_val) {
                max_val = *it;
            }
        }
        result.push_back(max_val);
        for (it=myVector.begin(); it!=myVector.end(); ++it){
            if (*it == max_val) {
                myVector.erase(it);
                --it;
                break;
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    int k;
    std::cout << "Enter the number of maximum elements to find: ";
    std::cin >> k;
    
    assert(isEqual({0, 1, 2, 3}, findMaximum(n, k));
    return 0;
}