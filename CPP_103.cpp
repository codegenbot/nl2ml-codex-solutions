int sum = 0;
int count = 0;
if (n > m) {
    return "-1";
}
for (int i = n; i <= m; i++) {
    sum += i;
    count++;
}
int avg = round((double)sum / count);
string binary_avg = bitset<8>(avg).to_string();
return binary_avg;
}