#include <iostream>
using namespace std;

int main(){

	// declare the base variables
	int number = 0;
	int array[] = { 1,2,3,4,5 };
	
	//Get the input from the user
	cout <<"Enter the number" <<endl;
	cin >>number;

	// for loop in c++
	for(int i = 0; i < 5; i++){
		if(i==2){
			cout <<endl;
			break;
		}
		if(i==3){
			cout <<"Continue";
			continue;
		}
		cout <<"printed by for loop \t" << i<<endl;
	}

	for( int &values : array){
		cout <<values <<endl;
	}

	// while loop in c++
	while(number < 5){
		cout <<"printed by while loop \t" << number <<endl;
		number++;
	}

	do{
		cout<< "This is do while after completing the while loop" <<endl;
	}while(number < 5);

	// This code is called initial load of the code
	goto_example : {
		cout <<"Goto function is called \t" <<number <<endl;
	}

	if(number == 5){
		++number;
		goto goto_example;
	}
	
	return 0;
}