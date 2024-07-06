```
#include <vector>
#include <string>

bool same(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        vector<string> v1=a[i];
        vector<string> v2=b[i];
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        if(v1 != v2) {
            return false;
        }
    }

    return true;
}

vector<vector<string>> by_length(const vector<int>& arr) {
    vector<vector<string>> result(10);
    
    for (int i : arr) {
        if(i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    result[0].push_back("One");
                    break;
                case 2:
                    result[1].push_back("Two");
                    break;
                case 3:
                    result[2].push_back("Three");
                    break;
                case 4:
                    result[3].push_back("Four");
                    break;
                case 5:
                    result[4].push_back("Five");
                    break;
                case 6:
                    result[5].push_back("Six");
                    break;
                case 7:
                    result[6].push_back("Seven");
                    break;
                case 8:
                    result[7].push_back("Eight");
                    break;
                case 9:
                    result[8].push_back("Nine");
                    break;
            }
        }
    }

    return result;
}

int main() {
    assert(same(by_length({1,4,8}) , {"One","Four","Eight"}));
    return 0;
}