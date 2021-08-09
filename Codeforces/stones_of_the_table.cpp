#include <iostream>
#include <string>
using namespace std;

int main(){
	// declare the variables
	int length;
	string str;

	// get the string;
	cin >>  length;
	cin >> str;

	int removeStone = 0;
	for(int i = 0; i < length; i++) {
		if(str[i] == str[i+1]) {
			removeStone += 1;
		}	
	}

	cout << removeStone;
}