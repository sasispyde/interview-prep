#include <iostream>
#include <vector>
using namespace std;

vector <int> plusOne(vector<int>& digits){

	int length = digits.size();

	if(length <= 0) return digits;
	
	int carry = 1;

	for(int i = length - 1; i >= 0 ; i--){

		int total = digits[i] + carry;
		if( total >= 10 ) {
			int temp = total % 10;
			total /= 10;
			carry = total;
			digits[i] = temp;
		} else {
			digits[i] = total;
			carry = 0;
			return digits;
		}
	}
	if(carry > 0) {
		digits.push_back(carry);
		int last_index = digits.size() - 1;
		int temp = digits[0];
		digits[0] = digits[last_index];
		digits[last_index] = temp;
	}

	return digits;
}

int main(){
	int arr[] = { 0, 0, 0 };

	vector <int> digits;
	for( int i = 0; i < 3; i++ ){
		digits.push_back(arr[i]);
	}

	plusOne(digits);

	for(int i = 0; i < digits.size(); i++){
		cout << digits[i] << endl;
	}

	return 0;
}