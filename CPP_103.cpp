if(n > m) {
        return "-1";
    }
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = round((double)sum / (m - n + 1));
    string binaryAvg = bitset<32>(avg).to_string();
    size_t found = binaryAvg.find("1");
    return binaryAvg.substr(found);
}