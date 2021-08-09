#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

	// get the statement
	string statement;
	cin >> statement;

	// initiliaze the number;
	vector<int> numbers;

	// to store the number as a string;
	string number = "";

	// to split the values
	for(int i = 0; i <= statement.length(); i++){
		if(statement[i] == '+' || (i) == statement.length()) {
			numbers.push_back(stoi(number));
			number = "";
		} else {
			number = number + statement[i];
		}
	}

	// to sort the array
	// bubble sort O(N^2)
	for(int i = 0; i < numbers.size(); i++) {
		for (int j = 0; j < numbers.size(); j++)
		{
			if(numbers[i] < numbers[j]) {
				int temp  = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	// print the result
	for(int i = 0; i < numbers.size(); i++){
		if((i+1) != numbers.size()){
			cout << numbers[i] << "+";
		} else {
			cout << numbers[i];
		}
	}
}