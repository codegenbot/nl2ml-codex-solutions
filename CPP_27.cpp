using namespace std;

string flip_case(string str){
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (islower(c)) {
            result += toupper(c);
        } else if (isupper(c)) {
            result += tolower(c);
        }
    }
    return result;
}