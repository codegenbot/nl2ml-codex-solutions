string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = 0;
        while (index < cipher1.length() && index < cipher2.length()) {
            if (message[i] == cipher1[index]) {
                result += cipher2[index];
                break;
            }
            index++;
        }
    }
    return result;
}