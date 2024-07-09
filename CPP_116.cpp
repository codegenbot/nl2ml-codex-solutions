Here is the completed code:

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
         [](int a, int b) {
             return bitset<32>(a).count() < bitset<32>(b).count()
                 || (bitset<32>(a).count() == bitset<32>(b).count() && a < b);
         });
    return result;
}