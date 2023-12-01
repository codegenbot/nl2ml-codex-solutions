#include <vector>
#include <iostream>

using namespace std;

vector<float> rescale_to_unit(vector<float> numbers);

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> rescale_to_unit(vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];
    
    // Find the minimum and maximum numbers in the vector
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    
    vector<float> rescaled_numbers;
    
    // Apply linear transformation to each number in the vector
    for(int i = 0; i < numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}