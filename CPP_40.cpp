#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (auto it = l.begin(); it != l.end();){
        if(std::find(it+1, l.end(), *it) != l.end())
            it = l.erase(it);
        else
            ++it;
    }
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 2; i++) {
        int left = i + 1;
        int right = l.size() - 1;
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            if (sum == 0)
                return true;
            else if (sum < 0)
                left++;
            else
                right--;
        }
    }
    return false;
}