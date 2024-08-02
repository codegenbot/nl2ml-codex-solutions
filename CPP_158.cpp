#include <vector>
#include <algorithm>
using namespace std;

string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return tie(a.size(), a.begin(), a.end()) <
                   tie(b.size(), b.begin(), b.end());
        });
    return maxWord;
}

int main(){
    assert ((find_max({"play", "play", "play"}) == "play"));
}