#include <iostream>

/*
	ALGORITHM :
		* function takes the LIST as a argument;
		* make temp_list for store the list;
		* we are going to use the stack to store the list items ( DATA );
		* make a loop and put all the items into the stack;
		* and again make a loop using the original list;
		* make an TEMP variable to store the data using stack.top(); it givens last element;
		* and pop the last element;
		* if the data is not eqaul to the node -> data return FALSE;
		* otherwise return TRUE;
*/

bool find_polyndrome_in_the_linked_list( Node * node ) {

	Node * list = node;

	stack<int> s;

	while( list != NULL ) {
		s.push(list -> data);
		list = list -> next;
	}

	while( node != NULL ){
		int data = s.top();
		
		s.pop();

		if( node -> data != data ){
			return false;
		}

		node = node -> next;
	}

	return true;
}