#include <iostream>
#include <cstdlib>
using namespace std;

// functiono of pointers 

int pointer_function(int a , int b) {
	return a + b;
}

int main(){
	
	// Varibale declaration
	int a = 100;
	int *p = &a;

	cout <<"Pointer varibale value and address" << endl;
	cout << p <<endl;
	cout << *p << endl;

	// SWAP the two numbers without using the 3rd variable
	int value_1 = 10;
	int value_2 = 20;

	value_1 = value_1 + value_2;
	value_2 = value_1 - value_2;
	value_1 = value_1 - value_2;

	cout <<"Values after swap" << endl;
	cout << value_1 <<endl;
	cout << value_2 <<endl;

	// refernce variable 
	// Assign a value at the time of declration
	// Reference varibale cannot be re-assigned

	int value = 10;
	int &refernce = value;
	
	cout << "Value before changed\t" << value << endl;
	refernce = 100;
	cout << "Value after changed\t" << value << endl;

	// Syntax to declare the function pointer
	// int ( * function ) ( int, int ); // Second paranthesis will contains the paraeter list to pass that function;

	int (* function_pointer) ( int,int );
	function_pointer = pointer_function;
	int sum = function_pointer( 5,5 );

	cout << "Result from the function pointer : \t"  << sum << endl;

	// using the new keyword to make an dynamic array ;

	int size;

	// it should be an pointer variable
	// NEW -> this is helpful to make a new memory at time of exection;

	int *array = new int[ size ];

	cout << "Enter the size od an array " << endl;
	cin >> size;

	cout << "Enter the array element" << endl;
	for(int i = 0; i < size; i++) {
		cin >> array[i];
	}
	cout << "Printing the element " << endl;
	for(int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}

	// Free the memory 

	free(array);

	cout << "After the free method is called : \t" << array[0] << endl;

	// Deleting the memory;
	delete array;

	cout << "The delete function is called" << endl;
	
	return 0;
}