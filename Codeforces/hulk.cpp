#include <iostream>
#include <string>
using namespace std;

int main() {
	int number;
	cin >> number;

	string answer = "";

	for(int i = 1; i <= number; i++) {
		if(i == 1) {
			if( number != i && number >= i + 1 ) {
				answer += "I hate that";
			} else {
				answer += "I hate it";
			}
		} else {
			if( number != i && number >= i + 1 ) {
				if( i % 2 == 0 ) {
					answer += " I love that";
				} else {
					answer += " I hate that";
				}
			} else {
				if( i % 2 == 0 ) {
					answer += " I love it";
				} else {
					answer += " I hate it";
				}
			}
		}
	}
	cout << answer <<  endl;
}