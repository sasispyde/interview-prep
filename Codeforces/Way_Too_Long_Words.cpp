#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

	int length = 0;
	vector<string> letters;
	string singleWord;

	// get the strings
	cin >> length;
	for(int i = 0; i < length; i++){
		cin >> singleWord;
		letters.push_back(singleWord);
	}

	// printing the words
	for(int j = 0; j < letters.size(); j++){
		int string_length = letters[j].length();
		if(string_length > 10){
			cout << letters[j][0] << string_length - 2 << letters[j][string_length-1] << endl;
		} else {
			cout << letters[j] << endl;
		}
	}
}