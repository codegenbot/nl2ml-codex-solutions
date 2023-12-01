#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers){
    map<string, int> number_map;
    number_map["zero"] = 0;
    number_map["one"] = 1;
    number_map["two"] = 2;
    number_map["three"] = 3;
    number_map["four"] = 4;
    number_map["five"] = 5;
    number_map["six"] = 6;
    number_map["seven"] = 7;
    number_map["eight"] = 8;
    number_map["nine"] = 9;

    vector<int> number_values;
    stringstream ss(numbers);
    string number;
    while (ss >> number) {
        number_values.push_back(number_map[number]);
    }

    sort(number_values.begin(), number_values.end());

    string sorted_numbers;
    for (int i = 0; i < number_values.size(); i++) {
        for (auto it = number_map.begin(); it != number_map.end(); it++) {
            if (it->second == number_values[i]) {
                sorted_numbers += it->first + " ";
                break;
            }
        }
    }

    sorted_numbers.pop_back(); // remove the trailing space

    return sorted_numbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    // Additional test cases
    assert(sort_numbers("one two three four") == "one two three four");
    assert(sort_numbers("nine eight seven six five") == "five six seven eight nine");
    assert(sort_numbers("") == "");

    cout << "All test cases passed!" << endl;

    return 0;
}