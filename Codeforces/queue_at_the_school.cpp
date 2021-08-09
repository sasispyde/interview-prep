#include <iostream>
#include <string>
using namespace std;

int main() {
	//  initialize the variables
	int i, k = 0;
	string queue;

	//  get the input;
	cin >> i >> k;
	cin >> queue;

	// loop the k times;
	for(int l = 0; l < k; l++) {
		// access the each element
		for (int r = 0; r < i - 1; r++)
		{
			// compare the queue i and i + 1 positions;
			if(queue[r] == 'B' && queue[r + 1] == 'G') {
				// swap the values;
				char temp = queue[r];
				queue[r] = queue[r + 1];
				queue[r + 1] = temp;
				
				// and increment the time (Based on the statement)
				r++;
			}
		}
	}
	// print the result;
	cout << queue;
}