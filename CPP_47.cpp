sort(l.begin(), l.end());
int n = l.size();
return n % 2 == 0 ? (l[n / 2 - 1] + l[n / 2]) / 2.0 : l[n / 2];