#include <iostream>
using namespace std;

bool lastNumberIsZero(int value) {
	int lastDigit = value % 10;
	if(lastDigit == 0) {
		return true;
	}
	return false;
}

int main() {
	int n;
	int k;

	cin >> n >> k;

	while(k != 0) {
		if(lastNumberIsZero(n)) {
			n = n / 10;
		} else {
			n -= 1;
		}
		k--;
	}
	cout << n;
}