#include <iostream>
#include <map>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	for(int i = 0; i < cases; i++) {
		int attrs;
		cin >> attrs;
		map<string, int> categories;
		for(int j =0; j < attrs; j++) {
			string id, type;
			cin >> id >> type;
			categories.insert(pair<string, int>(type, categories[type] += 1));
		}
		int sum = 1;
		for(auto& x : categories) {
			sum += x.second*sum;
		}
		cout << sum - 1 << endl;
	}
	return 0;
}
