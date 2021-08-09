#include <iostream>
using namespace std;

int main() {
	int i;
	int found = 0;
	cin >> i;

	for(int j = 2; j < i; j+=2) {
		for (int k = 2; k < i; k+=2)
		{
			if( (k + j) == i ) {
				found = 1;
				break;
			}
		}
		if(found) {
			break;
		}
	}
	if(found) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}