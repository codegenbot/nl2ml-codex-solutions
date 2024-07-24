#include <vector>
#include <cassert>

bool below_zero(std::vector<int> operations) {
    int balance = 0;
    
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    // Test your function here if needed
    
    return 0;
}