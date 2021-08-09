#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// function to reverse an interger array
int reverse(int array[] , int length) {
	int start = 0;
	int end = length - 1;
	while( start < end ){
		int temp  = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;
	}
	return 0;
}

// 0 -> means minimum 1 -> maximum
int find_minimum_or_maximum_element(int array[], int length, int key){
	int minimum_value = INT_MAX;
	int maximum_value = INT_MIN;
	if(key){
		for(int i = 0; i < length; i++){
			if(maximum_value < array[i]){
				maximum_value = array[i];
			}
		}
		return maximum_value;
	} else {
		for(int i = 0; i < length; i++){
			if(minimum_value > array[i]){
				minimum_value = array[i];
			}
		}
	}
	return minimum_value;
}

void print_the_multidimensional_array(int array[][3], int length) {
	int length_of_an_inner_array = 0;
	for(int i = 0; i < length; i++){
		length_of_an_inner_array = sizeof(array[i]) / sizeof(array[i][0]);
		for(int j = 0; j < length_of_an_inner_array; j++){
			cout << array[i][j] <<endl;
		}
	}
}

int * return_array(int array[], int length){
	int *pointer = array;
	return pointer;
}

int * add_number_for_all_element(int array[], int length, int number){
	int *arr = new int[length];

	for(int i = 0; i < length; i++){
		arr[i] = array[i] + number;
	}

	return arr;
}

// void print_any_data(void *array[], int length){
// 	for(int i = 0; i < length; i++){
// 		cout <<*array[i];
// 	}
// }

int main(){

	// define an array
	string string_array[] = { "sasi" , "kowshe", "sakthivel", "sagunthala", "ranjith" };
	int integer_array[] = { 1,2,3,4,5,6,7,8 };
	int multidimensional_array[3][3] = { {13,23,33},{43,53,63},{73,83,93} };

	// Length of an array 
	int length = sizeof(integer_array) / sizeof(integer_array[0]);
	int length_of_an_multidimensional_array = sizeof(multidimensional_array) / sizeof(multidimensional_array[0]);

	// function call
	reverse(integer_array,length);
	cout << "After reversed an array" << endl;
	for(int i = 0; i < length; i++){
		cout << integer_array[i] << endl;
	}
	
	cout << "Printing the two dimwnsioanal array" <<endl;
	print_the_multidimensional_array(multidimensional_array , length_of_an_multidimensional_array);

	//Find the miniumum element in the array

	int minimum_array[] = { 4,2,4,5,2,4,5,-2 };
	int length_of_an_minimum_array = sizeof(minimum_array) / sizeof(int);
	int minimum_value = find_minimum_or_maximum_element(minimum_array, length_of_an_minimum_array,0);
	int maximum_value = find_minimum_or_maximum_element(minimum_array , length_of_an_minimum_array ,1);
	cout << "Minimum value in the array is\t" << minimum_value << endl;
	cout << "Maximum value in the array is\t" << maximum_value << endl;

	// chacking the void pointer in the c++

	//cout << "Checking the void pointer" <<endl;
	//print_any_data(&string_array ,5);

	int *returnedArray = return_array(integer_array,length);

	int *added_array = add_number_for_all_element(integer_array, length, 10);

	cout << "Modified array and original array" << endl;
	for( int i = 0; i < length; i++ ){
		cout <<added_array[i] << '\t' << integer_array[i] << endl;
	}

	cout << "Returned Value from an function" << endl;
	for( int i = 0; i < length; i++ ){
		cout <<returnedArray[i] << endl;
	}
	
	return 0;
}