#include <vector>

bool monotonic(const vector<float>& l){
    bool increasing = true;
    bool decreasing = true;

    for(int i = 1; i < l.size(); i++){
        if(l[i] < l[i-1]){
            increasing = false;
        }
        if(l[i] > l[i-1]){
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    assert (monotonic(vector<float>({9, 9, 9, 9})) == true);

    return 0;
}