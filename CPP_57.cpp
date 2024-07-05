if (l.size() <= 1) return true;
    
    bool increasing = true;
    bool decreasing = true;

    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }

    return increasing || decreasing;
}