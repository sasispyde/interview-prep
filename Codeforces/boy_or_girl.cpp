#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

	// declare the variables
	string str;
	set <char> values;

	// get the string
	cin >> str;

	// loop the string and push into set (set on;ly stores distinct values)
	for(int i = 0; i < str.length(); i++) {
		auto result = values.find(str[i]);
		if (result != values.end()) {
			values.insert(str[i]);
		}
	}

	// size is odd it is a female or male;
	if(values.size() % 2 == 0){
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}
}