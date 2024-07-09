```
#include <string>
using namespace std;

bool is_prime(int n){
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            len = 0;
        } else {
            len++;
        }
        if (is_prime(len)) {
            result += sentence.substr(i - len + 1, len) + " ";
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "The words with prime length are: " << words_in_sentence(s) << endl;
    return 0;
}