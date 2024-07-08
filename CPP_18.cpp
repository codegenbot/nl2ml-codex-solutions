int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        // Start searching from the current position
        pos = str.find(substring, pos + 1); 
    }
    return count;
}