int count = 0;
    for (char c : str) {
        if (c == '[') count++;
        if (c == ']' && count > 0) count--;
    }
    return count < 2 && str.front() == '[' && str.back() == ']';
}