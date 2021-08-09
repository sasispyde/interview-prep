#include <iostream>
#include <string>
using namespace std;

bool countLetters(string str) {
	int lowerCaseLetters = 0;
	int upperCaseLetters = 0;

	for(int i = 0; i < str.length(); i++ ) {
		if(islower(str[i])){
			lowerCaseLetters += 1;
		} else {
			upperCaseLetters += 1;
		}
	}
	if(lowerCaseLetters == upperCaseLetters || lowerCaseLetters > upperCaseLetters) {
		return true;
	} else {
		return false;
	}
}

string changeAllCharToLowercase(string str) {
	for(int i = 0; i < str.length(); i++ ) {
		if(isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}			
	return str;
}

string changeAllCharToUppercase(string str) {
	for(int i = 0; i < str.length(); i++ ) {
		if(islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
	return str;
}

int main() {
	string str;
	cin >> str;
	bool condition = countLetters(str);
	if(condition) {
		str = changeAllCharToLowercase(str);
	} else {
		str = changeAllCharToUppercase(str);
	}
	cout << str << endl;
}