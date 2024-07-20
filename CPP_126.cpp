#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            int count = 0;
            for(int j = 0; j < lst.size(); j++){
                if(lst[j] == lst[i])count++;
            }
            if(count > 1)return false;
        }
    }
    return true;
}

int main() {
    vector<int> vec;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cout << "Enter element "<<i+1<<": ";
        cin >> x;
        vec.push_back(x);
    }
    
    if(is_sorted(vec))
        cout << "The vector is sorted." << endl;
    else
        cout << "The vector is not sorted." << endl;
    
    return 0;
}