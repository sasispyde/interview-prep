#include <iostream>
#include <string>
using namespace std;

class Words {
	public : 
		string str = "";

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
};

int main() {
	Words obj;
	cin >> obj.str;
	bool condition = obj.countLetters(obj.str);
	if(condition) {
		obj.str = obj.changeAllCharToLowercase(obj.str);
	} else {
		obj.str = obj.changeAllCharToUppercase(obj.str);
	}
	cout << obj.str << endl;
}