#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
	if (a.size() != b.size()) {
		return false;
	}

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] != b[i]) {
			return false;
		}
	}

	return true;
}

std::vector<int> get_odd_collatz(int n) {
	std::vector<int> sequence;
	sequence.push_back(n);

	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		} else {
			n = 3 * n + 1;
		}
		sequence.push_back(n);
	}

	return sequence;
}