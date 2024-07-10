#include <iostream>
#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>> input, int target) {
    vector<int> path;
    for (int i = 0; i < target; i++) {
        if (i >= input[1].size()) {
            path.push_back(input[1][0]);
        } else {
            for (int j = 0; j < input.size(); j++) {
                if (i >= input[j][0]) {
                    path.push_back(input[j][0]);
                    i -= input[j][0];
                }
            }
            break;
        }
    }
    return path;
}

int minPathTest() {
    vector<vector<int>> input;
    input.push_back({1, 3});
    input.push_back({3, 2});
    int target = 10;

    if (minPath(input, target).empty()) {
        cout << "No paths found with length " << target << "." << endl;
        return 0; 
    }
    
    for (int i : minPath(input, target)) {
        vector<int> output;
        while(i > 0) {
            if(i >= input[1].size()) {
                i -= input[1][0];
                output.push_back(input[1][0]);
            } else {
                int j = 0;
                while(j < input.size() && i >= input[j][0]) {
                    i -= input[j][0];
                    output.push_back(input[j][0]);
                    j++;
                }
                break;
            }
        }
        bool same = issame(output, {1, 3, 1, 3, 1, 3, 1, 3, 1, 3});
        if(same) {
            cout << "The minimum path is: ";
            for (int i : output) {
                string str = to_string(i); // convert int to string
                cout << str << " "; // print the string
            }
            cout << endl;
        } else {
            cout << "No paths found with length " << target << "." << endl;
        }
    }
}

int main() {
    minPathTest();
}