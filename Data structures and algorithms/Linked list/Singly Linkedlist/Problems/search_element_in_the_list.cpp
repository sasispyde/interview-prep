#include <iostream>

/*
	ALGORITHM ( iterative solution ) :
		* function takes the list as a argument, data
		* Loop the linked list until LIST  != NULL;
		* if the data is equal to LIST -> DATA return true;
		* otherwise LIST = LIST -> NEXT;
		* Finally return FALSE if DATA is not found in the list;
*/

// iterative solution
bool search( Node * node, int data ) {
	while( node != NULL ){
		if(node -> data == data) {
			return true;
		}
		node = node -> next;
	}
	return false;
}

/*
	ALGORITHM ( Recurrsion solution ) :
		* function takes LIST as a argument, data;
		* if list is NULL or EMPTY return FALSE;
		* else if LIST -> DATA == DATA return true;
		* else LIST = LIST -> NEXT;
*/

// recurrsion solution	
bool search( Node * node, int data ) {
	if(head == NULL) return false;
	else if( head -> data == data ) return true;
	else search( node -> next, data );
}

// search using position
/*
	ALGORITHM :

		* Function takes LIST and the POSITION;
		* EDGE CASES :
			* if NODE = NULL or POSITION < 0 return -1;
		* loop through the LIST until (index < position && LIST != NULL);
		* if NODE is NULL return -1;
		* else return LIST -> DATA;
*/

// search using position
int find_data_using_the_position( Node * node, int position ) {

	// EDGE cases
	if( node == NULL || position < 0 ) return position;

	// Loop through the List
	for( int i = 0; ( node != NULL && i < position ); i++ ) {
		node = node -> next;
	}

	// check node != NULL;
	if( node != NULL ) {
		return node -> data;
	} else {
		cout << "Their is no element at the specified index " << endl;
		return -1;
	}
}