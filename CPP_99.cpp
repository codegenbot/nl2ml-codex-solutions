double num = stod(value);
    int rounded = round(num);
    if (num - rounded == 0.5) {
        return num > 0 ? ceil(num) : floor(num);
    } else {
        return rounded;
    }
}