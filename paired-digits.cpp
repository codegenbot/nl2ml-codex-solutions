#include <string>
using namespace std;

int pairedDigits(string s) {
    int sum = 0;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i] == s[i+1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    string s = "123211";  
    cout << "Sum of paired digits: " << pairedDigits(s) << endl;
    return 0;
}