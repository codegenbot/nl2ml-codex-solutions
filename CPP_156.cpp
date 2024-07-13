Here is the completed code:

```cpp
string int_to_mini_roman(int number) {
    vector< pair<int,string> > roman = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{1,"I"}};
    string result;
    for (int i = 0; i < roman.size(); i++) {
        while (number >= roman[i].first) {
            number -= roman[i].first;
            result += roman[i].second;
        }
    }
    return result;
}