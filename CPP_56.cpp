int balance = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            balance++;
        } else if (bracket == '>') {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    return balance == 0;
}