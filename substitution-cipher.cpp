void decipherMessage() {
    string cipher1, cipher2, message;
  
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t index = cipher1.find(c);
        if (index != string::npos) {
            c = cipher2[index];
        } else {
            // Keep the character unchanged if not found in cipher1
        }
    }

    cout << message << endl;
}