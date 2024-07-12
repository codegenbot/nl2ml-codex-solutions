int main() {
    string input;
    getline(cin, input);
    
    string word;
    stringstream ss(input);
    string result = "";
    
    while (ss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result;
    
    return 0;
}