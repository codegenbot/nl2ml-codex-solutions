int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    int pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i];
        if (i != indices.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}