int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices;

    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    cout << endl;

    return 0;
}