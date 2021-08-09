// Print the charecters upto given range

#include <iostream>
#include <cstring>
using namespace std;

void print_char( string charecter, int range ){
	for(int i = 0; i < range; i++){
		cout << charecter;
	}
}

int main(){

	string str;
	cout << "Enter the string" << endl;
	cin >> str;

	int length = str.length();
	string charecter = "";
	int range = 0;
	for(int i = 0; i < length; i++){
		string temp = "";
		if( str[i] >= 'a' && str[i] <= 'z' ){
			charecter = str[i];
			if(str[i+1] > '0' && str[i+1] < '9'){
				temp = str[i+1];
				if(str[i+2] > '0' && str[i+2] < '9'){
					temp += str[i+2];
					++i;
				}
				++i;
				//cout << charecter << temp <<endl;
			}
		}
		if(charecter != "" && temp != "") {
			range = stoi(temp);
			print_char(charecter, range);
		}
	}
}

// Time Complexity is O(n+m);