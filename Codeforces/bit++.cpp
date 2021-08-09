#include <iostream>
#include <string>
using namespace std;

int main() {
	// get the number of statements
	int n;
	cin >> n;

	// initial value before
	int x = 0; 

	// get the statemets
	for(int i = 0; i < n; i++){
		// get it as a string
		string statement = "";
		cin >> statement;

		// is string X++ or ++X means increment the value by 1;
		// else decrement the value;
		if(statement == "X++" || statement == "++X") {
			x++;
		} else if(statement == "X--" || statement == "--X"){
			x--;
		}
	}

	// print the value
	cout <<x;
}