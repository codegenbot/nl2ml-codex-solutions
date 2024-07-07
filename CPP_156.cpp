```cpp
#include <bits/stdc++.h>
using namespace std;
string int_to_roman(int k) {
    vector<pair<int, string>> romanMap = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},
                                         {50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    string roman = "";
    for (const auto& pair : romanMap) {
        while (k >= pair.first) {
            k -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}