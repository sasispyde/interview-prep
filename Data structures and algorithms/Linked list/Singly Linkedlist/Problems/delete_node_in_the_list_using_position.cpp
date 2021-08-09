#include <iostream>


/*
	ALGORITHM :
		
		* function takes node and the position as the input;
		* check if the list is EMPTY or postion is less then 0 simply return;
		* Make a new variable called index which will track the position of the element;
		* and make a reference variable to make iterate over the list;
		* EDGE CASE :
			* if the postion is 0 and node != NULL means simply make (NODE -> LIST -> NEXT);
		* loop the list until the index value is lass then position - 1; ( 0 based index );
		* if the list is NULL we cannot find the index;
		* otherwise make LIST -> NEXT = LIST -> NEXT -> NEXT;

		* important thing is we have to free the memory ( store the next node and delete the current node );
			* like 
				Node * next;

				// once find the data to delete 
					* next = list -> next;
					* free(list);
					* list = list -> next;
			* it free's up the memory
*/

// delete node by using the position
void deleteNodeByUsingPosition( Node** node, int position ){
	
	// check if the given position is greater then 0 if continue otherwise return;
	// and same for node if the node is NULL return;
	if( *node == NULL || position < 0 ){
		cout << "Node cannot be deleted" << endl;
		return;
	}

	// initialize the index and set to be 0;
	// by using the For loop to avoid index variable;
	int index = 0;
	Node *list = *node;

	// Edge case if the element postion is 0 we simply remove the next pointer and set Node to Null
	if( list != NULL && position == 0 ) {
		*node = list -> next;
		cout << "Successfully Deleted" << endl;
		return;
	}

	// By using the while loop to find out the index that matches to position that are givcen by the user
	while( list != NULL && index < (position - 1)) {
		list = list -> next;
		index++;
	}

	// if the list is null we cannot find the index in the list that means that index is Greater then length if the list
	// else set the list -> next to list -> next -> next
	if( list == NULL ) {
		cout << "Their is no node present at specified index " << endl;
	} else {
		list -> next = list -> next -> next;
		cout << "Successfully Deleted" << endl;
	}
}