int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    for (int i = 0; i <= (int)text.length() - (int)target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }  
    }

    for (int idx : indices) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}