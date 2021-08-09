#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int number;
	long long int answer;

	cin >> number;

	if(number % 2 == 0) {
		answer = number / 2;
		cout << answer << endl;
	} else {
		answer = -abs((number / 2) + 1);
		cout << answer << endl;
	}
	return 0;
}