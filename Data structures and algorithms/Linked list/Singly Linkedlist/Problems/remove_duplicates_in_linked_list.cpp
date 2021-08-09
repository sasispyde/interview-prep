#include <iostream>

// Remove Duplicate element in sorted array
/*
	ALGORITHM :
		* declare the variable and store the node for iterate the list and make an NEXT pointer variable;
		* if the list is NULL return;
		* loop through the list;
			* if the LIST -> data == LIST -> next -> DATA;
			* simply assing the ( List -> next -> next ) NEXT pointer;
			* and free up the space using the function called list -> next;
			* and assing the list -> next = next;
			* else LIST = LIST -> next;
*/

void remove_dulipcate_from_the_sorted_linked_list( Node ** node ) {
	
	// store the node in refernce variable for accessing the values;
	Node * list = *node;

	// temp node pointer to store the next -> next pointer
	Node * next;

	// if the list is empty return the value;
	if( list == NULL ) {
		cout << "Their is no element in the list" <<endl;
		return;
	}

	// loop the list;
	while( list != NULL && list -> next != NULL ) {
		// check if the list current data with next data
		if( list -> data == list -> next -> data ) {
			// set the next -> next to current next pointer;
			next = list -> next -> next;
			// free the memory;
			free(list -> next);
			// set the list next = next pointer which refers the ( list -> next -> next );
			list -> next = next;
		} else {
			// else set the list = list -> next;
			list = list -> next;
		}
	}
}



// Remove Dupliace Elements in the un sorted array;

/*
	ALGORITHM : 
		* fuction take List as a argument;
		* if the list is empty return;
		* use the set to store the visited nodes;
		* And define the previoud reference variable;
		* Loop through the list and until the list is NULL;
			* declare the variable called DATA to store the current data;
			* if the data is present in the set;
				* set previos -> next = list -> next
				* delete the current node;
			* else insert the data into data;
				* and make previous = list; 
			* and make list = previous -> next;
*/

// Remove Duplicate elements from the un sorted array
void remove_dulipcate_from_the_un_sorted_linked_list( Node ** node ) {
	// make a reference variable for node;
	Node * list = *node;

	// check if the list is null return;
	if( list == NULL ) return ;

	// use the unordered set for storing the original values;
	unordered_set <int> set;

	// make previous pointer and set it to be NULL; 
	Node * previous = NULL;

	// Loop through the list
	while( list != NULL ) {
		
		// store the data in variable for later use only and easy to understand;
		int data = list -> data;
		// Lookup with the set for if the key is exusits or not;
		if( set.find(data) != set.end() ) {
			// make previous node next = list > next;
			previous -> next = list -> next;
			// delete the list;
			delete(list);
		} else {
			// insert the original value into data;
			set.insert( data );
			// make previous = list; ( current node );
			previous = list;
		}
		// stroe the list = previous node next;
		list = previous -> next;
	}
}