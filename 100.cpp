#include <iostream>

using namespace std;

int main() {
	int num_a, num_b;
	while (cin >> num_a >> num_b) {
		// reset counter
		int max_count = 0;

		// iterator over each number
		const int num_min = num_a < num_b ? num_a : num_b;
		const int num_max = num_a > num_b ? num_a : num_b;
		for (auto i = num_min; i <= num_max; i++) {
			int n = i;
			int count = 1;

			while (n > 1) {
				if (n & 0x1) {	// bitwise examination for odd number
					n = 3 * n + 1;
				}
				else {
					n >>= 1;
				}
				count++;
			}

			if (count > max_count) {
				max_count = count;
			}
		}

		// output
		cout << num_a << " " << num_b << " " << max_count << endl;
	}
	return 0;
}
