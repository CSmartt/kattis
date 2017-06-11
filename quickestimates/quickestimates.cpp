#include <iostream>
#include <cmath>

using namespace std;

int quickEstimate(double i) {
	return i > 0 ? (double) log10 ((double) i) + 1 : 1;
}

int main() {
	int cases;
	double costs[100], estimates[100];

	cin >> cases;
	for(int i = 1; i <= cases; ++i) {
		cin >> costs[i];
	}

	for(int i = 1; i <= cases; ++i) {
		estimates[i] = quickEstimate(costs[i]);
		cout << estimates[i] << endl;
	}

	return 0;
}
