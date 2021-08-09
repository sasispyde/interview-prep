#include <iostream>

/*
	ALGORITHM ( iterative solutuion ): 
		* function takes the list as a argument;
		* make a variable called length;
		* loop the LIST until it gets NULL;
			* increment the length variable by 1;
			* and set the LIST = LIST -> NEXT;
		* return the lenght 
*/

// iterative solution;
int length( Node * node ){
	int len = 0;
	while( node != NULL ) {
		len++;
		node = node -> next;
	}
	return len;
}

// using recursion
/*
	ALGORITHM :
		* if the node is null return 0
		* otherwise return 1 with call a function with node -> next
*/

int length_by_using_recurrsion( Node * node ) {
	if( node == NULL ) return 0;
	else return 1 + length_by_using_recurrsion(node -> next);
}