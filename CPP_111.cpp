#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int histogram(string s, vector<int>& arr) {
    if (s == "print") {
        int max_val = *max_element(arr.begin(), arr.end());
        int min_val = *min_element(arr.begin(), arr.end());
        
        for (int i = min_val; i <= max_val; i++) {
            int count = 0;
            for (int j = 0; j < arr.size(); j++) { 
                if (arr[j] == i) {
                    count++;
                }
            }
            cout << count << " ";
        }
    } else {
        return -1;
    }
    return 1;
}

int driver() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    string str;
    cin >> str;
    
    if(str == "print"){
        int result = histogram(str, arr); 
        cout << result << endl;
    } else{
        //handle other commands
    }
    
    return 0;
}