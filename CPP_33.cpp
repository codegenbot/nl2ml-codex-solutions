for (int i = 0; i < l.size(); ++i) {
    if ((i + 1) % 3 == 0) {
        sort(l.begin() + i - 2, l.begin() + i + 1);
    }
}
return l;