float num = stof(value);
    int rounded_num = round(num);
    if (num - rounded_num == 0.5 || num - rounded_num == -0.5) {
        return (num > 0) ? ceil(num) : floor(num);
    } else {
        return round(num);
    }
}