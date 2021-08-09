#include <iostream>
using namespace std;

// Function to reverse a string
string reverse_a_string(const string& str){

	int length = str.length() - 1;
	string reversed_string = "";
	for(int i = length; i >= 0; i--){
		reversed_string += str[i];
	}
	return reversed_string;
}

// Basic function with returning values

int interger_function(int value){
	static int value_for_whole_page = 10;
	return value;
}

float float_function(float value){
	return value;
}

bool boolean_function(float value){
	if(value != 10) return true;
	return false;
}

// call by value ( it not modify the original value ) for example 
void call_by_value(int call_by_value){
	call_by_value= 20;
	cout << call_by_value << endl;
}

void call_by_reference(int *call_by_reference){
	*call_by_reference = 20;
	cout <<*call_by_reference;
}

void change_the_array_value_by_using_call_by_value(int arr[]){
	for(int i = 0; i < 2; i++){
		cout << arr[i] << endl;
	}
}

void change_the_array_value_by_using_call_by_reference(int (*array)[5]){
	int length = sizeof(*array) / sizeof(*array[0]);
	*array[0] = 10;
	cout << length << endl;
}

int main(){

	char s[] = "sasi";
	int call_by_value_data = 10;
	int call_by_reference_data = 10;

	// Function call to reverse a string

	cout <<"String Function\t"  <<"Reversed String\t : " <<reverse_a_string(s) <<endl <<endl;

	// Basic function calls with return values

	cout <<"Interger Function\t" <<interger_function(20) <<endl <<endl;
	cout <<"Float Function\t" <<float_function(20.7) <<endl <<endl;
	cout <<"Boolean Function\t" <<boolean_function(4) <<endl <<endl;
	
	// Call by value function

	cout <<"Call by value is called\t";
	call_by_value(call_by_value_data);
	cout <<"Value from main function\t" <<call_by_value_data <<endl <<endl;

	// Call by refence

	cout <<"Call by reference is called\t ";
	call_by_reference(&call_by_reference_data);
	cout <<"\nValue from main function\t" <<call_by_reference_data <<endl <<endl;

	// change the array value using the call_by_refernce 

	int array[] = { 1,2,3,4,5 };
	cout << "Call by reference using array" << endl;
	change_the_array_value_by_using_call_by_reference(&array);

	for(int &value : array){
		cout << value << endl;
	}

	// call_by_value to change the value of an array
	
	int arr[] = { 1,2 };
	cout << "call by value using the array" << endl;
	change_the_array_value_by_using_call_by_value(arr);

	return 0;
}