#include <iostream>
#include <vector>

#define NUM_SYM		(123)

using namespace std;

// prime table
vector<int> primes;

// fast prime check
bool is_prime(int n) {
	if (n == 1 || n == 0) {
		return false;
	}

	// check with prime table
	for (int& p : primes) {
		if (p < n && !(n%p))
			return false;
	}

	// build prime table
	for (int i = primes.size() > 0 ? primes.back() + 1 : 2; i < n; i++) {
		is_prime(i);
		if (!(n%i))
			return false;
	}
	
	// add to table
	primes.push_back(n);
	return true;
}

int main() {
	// read case round
	int num_round;
	cin >> num_round;
	cin.ignore();

	// looping
	for (int i = 1; i <= num_round; i++) {
		// get a array filled with 0 and has size of 26
		vector<int> freq(NUM_SYM, 0);

		// read input
		char c;
		while ((c = cin.get()) != '\n') {
			freq[c]++;
		}

		// calc & output
		cout << "Case " << i << ": ";
		bool has_prime = false;
		for (int i = 0; i < NUM_SYM;i++) {
			if (is_prime(freq[i])) {
				cout << (char)(i);
				has_prime = true;
			}
		}

		if (!has_prime) {
			cout << "empty";
		}
		cout << endl;

	}

	return 0;
}