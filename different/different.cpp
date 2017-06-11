#include <iostream>

using namespace std;

int main() {
	long long num1, num2;
	while(cin >> num1 >> num2) {
		if(num1 < num2) cout << num2 - num1 << endl;
		else cout << num1 - num2 << endl;
	}	
	return 0;
}
