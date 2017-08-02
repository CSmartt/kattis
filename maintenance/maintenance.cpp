#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {
	char in[700];
	cin >> in;
	{
		int factors[strlen(in)/2];
		for(int i = 0; i < strlen(in); i += 2) {
			factors[i/2] = ((in[i] - '0')*10) + (in[i+1] - '0');
		}
		long double k = 1;
		for(int i = 0; i < strlen(in)/2; i++) k = k*factors[i];
		long double div = floor(sqrt(k));
		while(fmodl(k, div) != 0) div -= 1;
		if(strlen(in) > 2) cout << fmodl((div + k/div), (pow(10, 9) + 7)) << endl;
		else cout << factors[0] + 1 << endl;
	}
	return 0;
}
