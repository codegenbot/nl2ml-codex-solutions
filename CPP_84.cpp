int sum = 0;
while (N > 0) {
    sum += N % 2;
    N /= 2;
}
return bitset<8>(sum).to_string().substr(bitset<8>(sum).to_string().find('1'));