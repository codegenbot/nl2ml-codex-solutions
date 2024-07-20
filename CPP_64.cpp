int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    // Check for 'y' at the end
    if (!s.empty() && islower(s.back()) && s.back() == 'y') {
        count++;
    }
    return count;
}