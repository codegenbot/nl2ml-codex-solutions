#include <string>
using namespace std;

string solve(string s){
    int n = s.size();
    bool hasLetter = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    if(!hasLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    string input;
    getline(cin, input);

    string result = solve(input);
    cout << result << endl;

    return 0;
}