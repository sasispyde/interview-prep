#include <iostream>
#include <string>
using namespace std;

class Translate {
	public : 
		string s;
		string t;

		bool isPalindrome(string s, string t) {
			if(s.length() != t.length()) {
				return false;
			}

			int j = 0;
			for(int i = s.length() - 1; i >= 0; i--) {
				if(s[i] != t[j]) {
					return false;
				}
				j++;
			}
			return true;
		}
};

int main() {
	Translate obj;
	cin >> obj.s >> obj.t;
	bool isBirlandishWord = obj.isPalindrome(obj.s,obj.t);
	if(isBirlandishWord) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}