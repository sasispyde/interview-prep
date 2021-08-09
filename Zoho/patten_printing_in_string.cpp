// Print the patten in given string

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string str;
	cout << "Enter the string to print" << endl;
	cin >> str;

	int length = str.length();
	int first = 0;
	int last = length - 1;
	for(int i = 0; i < length; i++){
		for(int j  = 0; j < length; j++){
			if(first == j) {
				cout << str[j];
			} else if(last == j){
				cout << str[j];
			} else {
				cout << " ";
			}
		}
		first++;
		last--;
		cout << endl;
	}
}