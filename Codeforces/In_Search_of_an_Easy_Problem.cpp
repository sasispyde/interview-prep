#include <iostream>
#include <vector>
using namespace std;

int main()
{	
	int numberOfPeople;
	vector<int> response;
	cin >> numberOfPeople;

	for(int i = 0; i < numberOfPeople; i++) {
		int number;
		cin >> number;
		response.push_back(number);
	}
	// for(auto itr : response) {
	// 	if(itr == 1) {
	// 		cout << "HARD" << endl;
	// 		return 0;
	// 	}
	// }
	for(int i = 0; i < numberOfPeople; i++) {
		if(response[i] == 1) {
			cout << "HARD" << endl;
			return 0;
		}
	}
	cout << "EASY" << endl;
	return 0;
}