#include <iostream>

/*
	ALGORITHM :

		* Function Takes NODE REFERENCE and the DATA as a input;
		* make a reference variable Called LIST; ( for access the element );
		* EDGE CASES : 
			* if the list is empty simply print messange and return;
			* if the list is NOT empty and NODE -> DATA = DATA;
				* Simply make NODE to LIST -> next;
				* and return;
		* Loop the list untill it satisfies the condition; or END of the list;
			* if the LIST -> next != NULL and LIST -> NEXT _> DATA == DATA just BREAK the loop;
			* else set the LIST = LIST -> NEXT;
		* if the list is empty data cannot be founded so simply return;
		* else set the LIST -> NEXT = LIST -> NEXT -> NEXT; and return;

		* important thing is we have to free the memory ( store the next node and delete the current node );
			* like 
				Node * next;

				// once find the data to delete 
					* next = list -> next;
					* free(list);
					* list = list -> next;
			* it free's up the memory
*/

// delete node by using the value;
void deleteNode( int data, Node ** node) {
	
	// Make a node acceccable
	Node *list = *node;

	// check if the list is empty if it is true return;
	if( list == NULL  ) {
		cout << "List is empty item cannot be removed" <<endl;
		return;
	}

	// Edge case 2 if the element is present at the begining of the list;
	if( list != NULL && list -> data == data ) {
		*node = list -> next;
		cout << "Successfully Deleted" <<endl;
		return;
	}

	// Try to find the item in the list; ( it is not sorted so binary search is not work here )
	while( list != NULL ){
		// if i found the item i just break the loop otherwise iterete the loop
		if( list -> next != NULL && list -> next -> data == data){
			break;
		} else {
			list = list -> next;
		}
	}

	// if the list is NULL after the itreation so item cannot be found;
	if(list == NULL) {
		cout << "Data not found" <<endl;
	} else {
		// lets make a list -> next = list -> next -> next;
		// And print the success message;
		// we have to free the memory;
		list -> next = list -> next -> next;
		cout << "Successfully Deleted" <<endl;
	}
}