#include <vector>
#include <cmath> // For pow() function

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) { 
            if (int(num) % 2 != 0) { 
                sum += pow(int(num), 2);
            }
        }
    }
    return sum;
}