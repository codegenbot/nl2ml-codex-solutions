Here is the solution:

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), 
         [](int a, int b) {
             int ones_a = __builtin_popcount(a);
             int ones_b = __builtin_popcount(b);
             if (ones_a == ones_b) {
                 return a < b;
             }
             return ones_a < ones_b;
         });
    return result;
}