#include <iostream>
#include <vector>
using namespace std;

// Time complexity is  : O(N);
// Space complexity is : O(N);
int main(){
	// To get the number of contest
	int contest = 0;
	int numberOfTimeFriendsFindTheSolution = 0;
	cin >> contest;

	// initialize the vector
	vector<vector<int>> contestDetails;
	// Get the contest details
	for(int i = 0; i < contest; i++){
		vector<int> rowDetails;
		for(int j = 0; j < 3 ; j++){
			int temp = 0;
			cin >> temp;
			rowDetails.push_back(temp);
		}
		contestDetails.push_back(rowDetails);
	}

	for(int i = 0; i < contest; i++){
		int count = 0;
		if(contestDetails[i][0] == 1){
			count++;
		}
		if(contestDetails[i][1] == 1){
			count++;
		}
		if(count != 0 && contestDetails[i][2] == 1){
			count++;
		}
		if(count >= 2) {
			numberOfTimeFriendsFindTheSolution += 1;
		}
	}

	cout <<numberOfTimeFriendsFindTheSolution;
}