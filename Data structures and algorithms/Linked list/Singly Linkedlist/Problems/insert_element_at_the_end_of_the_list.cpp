#include <iostream>

/*
	ALGORITHM : 

		* function takes NODE REFERENCE ( CALL BY REFERENCE ) and data to insert;
		* make a new node;
		* set the value to the new node;
		* set the newNode next to NULL ( lastnode always points to NULL );
		* Make a reference variable to loop the list;
		* EDGE CASES : 
			* if the list is empty simply assign the newNode to NODE REFERENCE
			* and return;
		* loop the list until the loops second last element like ( NODE -> NEXT != NULL )
		* set the list.next = newNode;
		* and return; 
*/

void insertEnd( Node** head_ref, int data ) {
	
	// make an new node;
	Node* new_node = new Node();

	// set te data to the new node;
	new_node -> data = data;

	// and set the new node's next to NULL;
	new_node -> next = NULL;

	// make an referece variable for the HEAD to iterate the HEAD;
	Node * node = *head_ref;

	// if the head is NULL assign the new node to HEAD and return; 
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;	
	}

	// find the before last node;
	while( node -> next != NULL ) {
		node = node -> next;
	}

	// make a node -> next to new node;
	node -> next = new_node;
	return;
}