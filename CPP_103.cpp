if (n > m) {
    return "-1";
}

int sum = 0;
for (int i = n; i <= m; i++) {
    sum += i;
}

int avg = round((double)sum / (m - n + 1));
string binary = bitset<sizeof(int)*CHAR_BIT>(avg).to_string();
size_t found = binary.find('1');
return binary.substr(found);
}