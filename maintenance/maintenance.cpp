#include <iostream>
#include <cstring>

using namespace std;

int getLength(int input) {
	int length = 1;
	long div = input;
	while(div /= 10) length++;
	return length;
}

int inputToFactors(int N, int length) {
	int factors = length / 2;i

/* This if() allows us to read the input directly to an int, as it compensates for a truncated leading zero. */
	if(length /2 != 0) factors += 1;

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
