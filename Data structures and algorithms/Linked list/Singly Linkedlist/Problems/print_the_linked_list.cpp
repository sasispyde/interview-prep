#include <iostream>

/*
	ALGORITHM  :
		* Take the list as a argument;
		* check if the list is empty or not if it is empty simply return;
		* or loop the list until it gets the end of the list
			* in that loop print the elements
*/

void print_data(Node *n) {
	if(n == NULL) {
		cout << "List is empty add some data to print" << endl;
		return;
	}
	while(n != NULL){
		if(n -> next != NULL) 
			cout << n -> data << " -> ";
		else
			cout << n -> data << endl; 
		n = n -> next;
	}
}
