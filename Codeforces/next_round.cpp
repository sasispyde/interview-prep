#include <iostream>
#include <vector>
using namespace std;

int main() {
	// declaration
	int n = 0;
	int k = 0;

	// initialize the vector
	vector<int> scores;

	// get the value for n and k;
	cin >> n >> k;

	int advancers = 0;

	// get the scores;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		scores.push_back(temp);
	}

	// before calculation;
	for(int i = 0 ; i < k; i++) {
		if(scores[i] != 0) {
			advancers++;
		}
	}

	// after calculation
	if( scores[k - 1] != 0 && scores[k - 1] == scores[k] ) {
		for(int i = k; i < n; i++) {
			if(scores[k-1] == scores[i]) {
				advancers += 1;
			}
		}
	}

	cout << advancers << endl;
}