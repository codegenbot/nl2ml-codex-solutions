for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[i] == lst[j]) {
                count++;
                if (count > 1) {
                    return false;
                }
            }
        }
    }
    return true;
}