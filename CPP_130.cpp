vector<int> res;
    res.push_back(3);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            res.push_back(1 + i / 2);
        else
            res.push_back(res[i - 1] + res[i - 2] + res[i + 1]);
    }
    return res;
}