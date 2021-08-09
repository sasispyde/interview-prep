#include <iostream>

/*	
	ALGORITHM : 

		* push function is used to insert the data in the begining of the list;

		* this function takes four steps to insert the data;

		* function takes two arguments ( Pointer to Pointer for HEAD , and DATA )

		* STEPS : 

			* 1 . allocate new node;

			* 2 . put the data into the node;

			* 3 . make a next of new_node as head;

			* 4 . move the head to point to the new node;

	It takes O(1) time to insert the data;
*/

void push( Node** head_ref, int data ) {
	
	// Allocate new node;
	Node * new_node = new Node();

	// put the data into new_node;
	new_node->data = data;

	// make a next of new_node as head;
	new_node->next = *head_ref;

	// move the next point to the new node;
	*head_ref = new_node;
}