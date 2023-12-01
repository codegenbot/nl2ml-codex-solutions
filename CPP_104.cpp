#include <vector>
#include <algorithm>

std::vector<int> unique_digits(std::vector<int> x);

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main(){
    std::vector<int> input = {135, 103, 31};
    std::vector<int> expected_output = {31, 135};
    std::vector<int> output = unique_digits(input);
    assert(output == expected_output);

    return 0;
}