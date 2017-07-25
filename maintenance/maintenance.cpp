#include <iostream>
#include <cmath>

using namespace std;

int getLength(int input) {
	int length = 1;
	long div = input;
	while(div /= 10) length++;
	return length;
}

int inputToFactors(int N, int length) {
	int factors = ceil(length / 2);
	/* Using ceil() here allows reading input as an int, as a truncated leading zero makes the input length odd. Ceil() compensates by increasing the number of factors by 1 if this is the case */

	int arr[factors];
	for (int i = factors - 1; i >= 0; i--) {
    	arr[i] = N % 100;
    	N /= 100;
	}
	
	for(int i = 0; i < factors; i++) {
		cout << arr[i] << " " << endl;
	}

}

int main() {
	int input;
	cin >> input;
	cout << input << endl;
	inputToFactors(input, getLength(input));
	cout << getLength(input) << endl;
}
