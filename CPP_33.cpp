vector<int> l_divisible_by_three;
    vector<int> l_not_divisible_by_three;
    vector<int> l_sorted_divisible_by_three;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
            l_sorted_divisible_by_three.push_back(l[i]);
        } else {
            l_not_divisible_by_three.push_back(l[i]);
        }
    }

    sort(l_sorted_divisible_by_three.begin(), l_sorted_divisible_by_three.end());

    vector<int> l_prime;
    int j = 0, k = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime.push_back(l_sorted_divisible_by_three[j]);
            j++;
        } else {
            l_prime.push_back(l_not_divisible_by_three[k]);
            k++;
        }
    }

    return l_prime;
}