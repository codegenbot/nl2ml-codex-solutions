sort(lst.begin(), lst.end());
    int count = 1, result = -1;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] > lst[i - 1]) {
            count++;
            if (count == 2) {
                result = lst[i];
                break;
            }
        }
    }
    if (count < 2) {
        return -1;
    } else {
        return result;
    }
}