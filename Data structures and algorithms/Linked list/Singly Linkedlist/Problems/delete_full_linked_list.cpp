#include <iostream>

/*
	ALGORITHM : 

		* Setting NULL to the list not work C/C++ programming language;
		* we have free up the memory to delete the list;
		* make new reference variable called LIST;
		* and temp variable for storing the LIST -> NEXT;
		* Loop over the list and and free up the memory;
		* and finally make NODE = NULL;
		* Like : 
			* next = list -> next;
			* free(list);
			* list = next;
*/

void deleteList( Node ** node ) {
	// initialize the list;
	Node * list = *node;
	
	// set a next pointer to store list's next pointer;
	Node * next;

	// iterate the list and free the memory
	while( list != NULL ) {
		next = list -> next;
		free(list);
		list = next;
	}

	// set the list to NULL
	*node = NULL;
	cout << "List Successfully Deleted " << endl;
}