#include <string>
using namespace std;

int pairedDigits(string s) {
    int sum = 0;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == s[i+1]){
            sum += s[i];
        }
    }
    return sum;
}

int main(){
    string str;
    cout << "Enter a string of digits: ";
    cin >> str;
    int result = pairedDigits(str);
    cout << "Sum of the digits whose following digit is the same is: " << result << endl;
    return 0;
}