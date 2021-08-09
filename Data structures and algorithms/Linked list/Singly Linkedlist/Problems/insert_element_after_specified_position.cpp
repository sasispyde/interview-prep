#include <iostream>

/*
	ALGORITHM :

		* Make an new variable called index ( for while loop only );
		* check if the list is Empty, NULL,postion is less then 0( ZERO ) or not if empty return;
		* if postion is zero simply do insert beginning steps;
		* Loop until the index is less then position and make check if the list is empty also;
		* if list is NULL position is greater then index simply return; ( Postion is greater then list length );
		* make an new node;
		* set the data to new node;
		* make newNode.next to list.next;
		* list.next = newNode
*/


// Implementation;
void insertAfter( Node* head_ref, int data, int position , Node** node ) {
	
	// Let's make an index variable to point out the index position of the nodes
	int index = 1;

	// initially check if the node is NULL or not if it is NULL return; else continue the operation
	if(head_ref == NULL || position < 0) {
		cout << "The node cannot be inserted";
		return;
	}

	// Loop through the List until we get the position;
	while( index < position && head_ref != NULL ){
		index++;
		head_ref = head_ref -> next;
	}

	// Mak an new node for insert new data;
	Node * new_node = new Node();
	
	// Set the data to the new node
	new_node->data = data;

	// check if the index is 0 or not if it is 0 insert at the beginning of the List;
	if( position > 0 ) {
		// make an new node's next pointer to Heads next; 	
		new_node->next = head_ref->next;
		
		// And Heads next will became a new node;
		head_ref->next = new_node;

	} else {

		// make a new node next to node;
		new_node->next = *node;
		
		// Now node will became new node;
		*node = new_node;
	}
}