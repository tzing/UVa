#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<unsigned long long> ancestor{ 1, 1 };

	int gen;
	while (cin >> gen) {
		if (!gen) {
			break;
		}
		if (gen >= ancestor.size()) {
			for (int i = ancestor.size(); i <= gen; i++) {
				ancestor.push_back(ancestor[i - 1] + ancestor[i - 2]);
			}
		}
		cout << ancestor[gen] << endl;
	}
	return 0;
}