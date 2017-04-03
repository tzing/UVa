#include <iostream>
#include <string>

using namespace std;

int main() {
	int num_requirement = 0;
	int num_proposal = 0;
	int num_rfp = 0;

	// read requirement and proposal numbers
	while (cin >> num_requirement >> num_proposal)
	{
		if (num_requirement == 0 && num_proposal == 0) {
			break;
		}
		else {
			cin.ignore();
			num_rfp++;
		}

		// requirement
		for (int i = 0; i < num_requirement; i++) {
			string tmp;
			getline(cin, tmp);
		}

		// proposal
		string w_name;
		double w_price = -1;
		int w_item = -1;
		for (int i = 0; i < num_proposal; i++) {
			// get name
			string name;
			getline(cin, name);

			// get data
			double price;
			int item;
			cin >> price >> item;
			cin.ignore();

			// get item
			for (int j = 0; j < item; j++) {
				string tmp;
				getline(cin, tmp);
			}

			// comparing
			if ((item > w_item) || (item == w_item && price < w_price)) {
				w_name = name;
				w_price = price;
				w_item = item;
			}
		}

		// output
		if (num_rfp > 1) {
			cout << endl;
		}
		cout << "RFP #" << num_rfp << endl;
		cout << w_name << endl;
	}

	return 0;
}
