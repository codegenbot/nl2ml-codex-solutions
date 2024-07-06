#include <iostream>
#include <vector>
#include <cmath> // for std::abs

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold){
    #include<vector>

    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(abs(numbers[i] - numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    cout << (has_close_elements(a, 0.1) ? "True" : "False") << endl;
    return 0;
}