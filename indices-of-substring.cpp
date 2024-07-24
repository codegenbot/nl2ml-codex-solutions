auto findIndices(string text, string target) -> std::vector<int> {
    vector<int> indices;
    int prevLast = 0;
    while ((int last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(last + 1);
        prevLast = last + 1;
    }
    return indices;
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    auto indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}