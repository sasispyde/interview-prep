#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	// declaration
	string str;

	// to ge the values
	cin >> str;

	// to convert the first letter as a capital one
	int chCode = (int)str[0];
	int position = (chCode - 97);

	// check if the char is small letter;
	if(chCode > 90){
		int newCode = 65 + position;
		str[0] = (char)newCode;
	}

	// print the result
	cout << str;
}